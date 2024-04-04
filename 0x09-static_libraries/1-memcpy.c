#include "main.h"

/**
 * _memcpy - Copies memory area
 * @dest: Destination memory where data is copied
 * @src: Source memory to be copied
 * @n: Number of bytes to copy
 *
 * Return: Pointer to the destination memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int r = 0;
int i = n;

for (; r < i; r++)
{
dest[r] = src[r];
n--;
}
return (dest);
}
