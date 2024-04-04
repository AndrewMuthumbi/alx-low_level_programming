#include "main.h"

/**
 * _strstr - Locates the first occurrence of a substring in a string.
 * @haystack: The string to search within.
 * @needle: The substring to find.
 *
 * Return: A pointer to the beginning of the substring within the string,
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *h_ptr = haystack;
char *n_ptr = needle;

while (*h_ptr == *n_ptr && *n_ptr != '\0')
{
h_ptr++;
n_ptr++;
}

if (*n_ptr == '\0')
return (haystack);
}

return (0);
}
