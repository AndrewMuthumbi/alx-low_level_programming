#include "main.h"

/**
 * _strncpy - Copies a string up to a specified length.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of characters to copy.
 *
 * Return: A pointer to the destination string.
 */
char *_strncpy(char *dest, char *src, int n)
{
int index = 0;

while (index < n && src[index] != '\0')
{
dest[index] = src[index];
index++;
}

while (index < n)
{
dest[index] = '\0';
index++;
}

return (dest);
}
