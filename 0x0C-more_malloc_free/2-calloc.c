#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Allocates memory for an array and initializes it with zero
 * @nmemb: Number of elements in the array
 * @size: Size of each element
 *
 * Return: Pointer to the allocated memory, NULL if allocation fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int total_size, i;
	char *char_ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;

	ptr = malloc(total_size);

	if (ptr == NULL)
		return (NULL);

	char_ptr = (char *)ptr;

	for (i = 0; i < total_size; i++)
		char_ptr[i] = 0;

	return (ptr);
}
