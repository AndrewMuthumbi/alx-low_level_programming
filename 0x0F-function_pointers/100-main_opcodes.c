#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of its own main function
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
int num_bytes, i;

if (argc != 2)
{
printf("Error\n");
return (1);
}

num_bytes = atoi(argv[1]);

if (num_bytes < 0)
{
printf("Error\n");
return (2);
}

/* Print opcodes */
unsigned char *opcode = (unsigned char *)main;
for (i = 0; i < num_bytes; i++)
{
printf("%02x", opcode[i]);
if (i < num_bytes - 1)
printf(" ");
}
printf("\n");

return (0);
}
