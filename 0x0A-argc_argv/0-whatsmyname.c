#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
/* Check if at least one argument (the program name) is provided */
if (argc >= 1)
{
/* Print the program name */
printf("%s\n", argv[0]);
}
return (0);
}
