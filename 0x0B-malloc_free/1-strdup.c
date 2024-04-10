#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Duplicate a string into a new memory location.
 * @str: Pointer to the string to be duplicated.
 * Return: Pointer to the duplicated string or NULL if str is NULL,
 *                 or if malloc fails.
 */
char *_strdup(char *str)
{
char *duplicate;
int i, length = 0;

if (str == NULL)
return (NULL);

i = 0;
while (str[i] != '\0')
{
length++;
i++;
}

duplicate = malloc(sizeof(char) * (length + 1));

if (duplicate == NULL)
return (NULL);

for (i = 0; str[i]; i++)
{
duplicate[i] = str[i];
}
duplicate[i] = '\0';

return (duplicate);
}
