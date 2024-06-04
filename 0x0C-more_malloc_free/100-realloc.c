#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: Pointer to the memory previously allocated with a call to malloc
 * @old_size: The size, in bytes, of the allocated space for ptr
 * @new_size: The new size, in bytes, of the new memory block
 *
 * Return: Pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int i;

	/*
	 * If new_size is zero, and ptr is not NULL, then the call is
	 * equivalent to free(ptr). Return NULL
	 */
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	/* If ptr is NULL, then the call is equivalent to malloc(new_size) */
	if (ptr == NULL)
		return (malloc(new_size));

	/* If new_size == old_size, do not do anything. Return ptr */
	if (new_size == old_size)
		return (ptr);

	/* Allocate new memory block with new_size */
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	/* Copy the contents of the old memory block to the new memory block */
	if (old_size > new_size)
		old_size = new_size;
	for (i = 0; i < old_size; i++)
		((char *)new_ptr)[i] = ((char *)ptr)[i];

	/* Free the old memory block */
	free(ptr);

	return (new_ptr);
}
