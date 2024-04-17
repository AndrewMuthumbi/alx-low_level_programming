#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * malloc_checked - allocate memory using malloc
 * @b: size of memory to allocate
 *
 * Return: Pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)

		_exit(98);
/* Terminate the process with status 98 */

	return (ptr);
}
