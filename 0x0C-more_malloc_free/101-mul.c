#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * is_digit - Checks if a string consists of digits
 * @str: The string to check
 *
 * Return: 1 if all characters are digits, 0 otherwise
 */
int is_digit(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

/**
 * multiply - Multiplies two positive numbers represented as strings
 * @num1: The first number
 * @num2: The second number
 *
 * Return: The product of the two numbers as a string
 */
char *multiply(char *num1, char *num2)
{
	int len1 = 0, len2 = 0, i, j, carry, sum;
	char *result;

	while (num1[len1] != '\0')
		len1++;
	while (num2[len2] != '\0')
		len2++;

	result = malloc(len1 + len2 + 1);
	if (result == NULL)
		return (NULL);

	for (i = 0; i < len1 + len2; i++)
		result[i] = '0';
	result[i] = '\0';

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			sum = (num1[i] - '0') * (num2[j] - '0') + (result[i + j + 1] - '0') + carry;
			result[i + j + 1] = sum % 10 + '0';
			carry = sum / 10;
		}
		result[i + j + 1] = carry + '0';
	}

	while (*result == '0' && *(result + 1) != '\0')
		result++;

	return (result);
}

int main(int argc, char *argv[])
{
	char *result;

	if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	result = multiply(argv[1], argv[2]);

	if (result == NULL)
	{
		printf("Error\n");
		return (98);
	}

	printf("%s\n", result);
	free(result);

	return (0);
}
