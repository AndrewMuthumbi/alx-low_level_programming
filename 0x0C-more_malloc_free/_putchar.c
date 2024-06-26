#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes a character to stdout
 * @c: The character to print
 *
 * Return: On success 1, on error -1 and errno set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
