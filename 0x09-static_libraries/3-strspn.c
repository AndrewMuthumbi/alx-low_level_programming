#include "main.h"

/**
 * _strspn - Computes the length of the initial segment of a string
 *            consisting of only characters that are part of another string.
 * @s: The string to search within.
 * @accept: The string containing the characters to match.
 *
 * Return: The number of characters in the initial segment of @s
 *         that are part of @accept.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int i;

while (*s)
{
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
{
count++;
break;
}
else if (accept[i + 1] == '\0')
return (count);
}
s++;
}

return (count);
}
