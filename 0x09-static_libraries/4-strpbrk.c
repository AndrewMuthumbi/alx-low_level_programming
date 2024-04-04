#include "main.h"

/**
 * _strpbrk - Finds the first occurrence in a string of any character
 *            from another string.
 * @s: The string to search within.
 * @accept: The string containing characters to search for.
 *
 * Return: A pointer to the first matching character,
 *         or NULL if no match is found.
 */
char *_strpbrk(char *s, char *accept)
{
int index;

while (*s)
{
for (index = 0; accept[index]; index++)
{
if (*s == accept[index])
return (s);
}
s++;
}

return ('\0');
}
