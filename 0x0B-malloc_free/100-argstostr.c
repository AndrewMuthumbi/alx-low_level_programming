#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments passed to the program.
 * @ac: Number of arguments passed.
 * @av: Array of arguments.
 * Return: Pointer to a new string containing all arguments concatenated,
 * or NULL if ac is 0 or av is NULL.
 */
char *argstostr(int ac, char **av)
{
int i, j, len = 0, index = 0;
char *str;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
len++;
}
len += ac;

str = malloc(sizeof(char) * (len + 1));
if (str == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
str[index] = av[i][j];
index++;
}
if (str[index] == '\0')
{
str[index++] = '\n';
}
}
return (str);
}
