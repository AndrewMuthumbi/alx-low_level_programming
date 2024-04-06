#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Return: 0 on success, 1 on failure
 */

int main(int argc, char *argv[])
{
int sum = 0;
int i, j;

if (argc < 2)
{
printf("0\n");
return (0);
}

for (i = 1; i < argc; i++)
{
int number;

for (j = 0; argv[i][j] != '\0'; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
}

number = atoi(argv[i]);
if (number < 0)
{
printf("Error\n");
return (1);
}

sum += number;
}

printf("%d\n", sum);
return (0);
}
