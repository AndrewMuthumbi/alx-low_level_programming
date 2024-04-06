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
(void)argv;  /* Silence unused parameter warning */

/* Print the number of arguments passed into the program */
printf("%d\n", argc - 1);

return (0);
}
