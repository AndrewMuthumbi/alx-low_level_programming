#include "main.h"

/**
 * _strncat - Concatenates two strings using at most n bytes from src
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string
 * @n: Number of bytes from src to be concatenated
 *
 * Return: Pointer to the destination string
 */
char *_strncat(char *dest, char *src, int n)
{
int a = 0, b = 0;

while (dest[a] != '\0')
{
a++;
}

while (b < n && src[b] != '\0')
{
dest[a] = src[b];
a++;
b++;
}

dest[a] = '\0';

return (dest);
}
