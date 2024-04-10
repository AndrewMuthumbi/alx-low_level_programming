#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of a given size and
 *                         assigns the character 'c' to each element
 *
 * @size: size of the array
 * @c: character to assign
 *
 * Return: pointer to the created array, or NULL if failed
 */
char *create_array(unsigned int size, char c)
{
char *str;
unsigned int i;

str = malloc(sizeof(char) * size);

if (size == 0 || str == NULL)
return (NULL);

for (i = 0; i < size; i++)
str[i] = c;

return (str);
}
