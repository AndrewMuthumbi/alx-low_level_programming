#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * _isdigit - Checks if a character is a digit
 * @c: The character to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _strlen - Calculates the length of a string
 * @s: The string to measure
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}

/**
 * mul - Multiplies two positive numbers
 * @num1: The first number to multiply
 * @num2: The second number to multiply
 *
 * Return: The result of the multiplication
 */
char *mul(char *num1, char *num2)
{
	int len1 = _strlen(num1);
	int len2 = _strlen(num2);
	int *result = calloc(len1 + len2, sizeof(int));
	char *res_str;
	int i, j;

	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			result[i + j + 1] += (num1[i] - '0') * (num2[j] - '0');
			result[i + j] += result[i + j + 1] / 10;
			result[i + j + 1] %= 10;
		}
	}

	i = 0;
	while (result[i] == 0 && i < len1 + len2 - 1)
		i++;

	res_str = malloc(len1 + len2 - i + 1);
	j = 0;
	while (i < len1 + len2)
		res_str[j++] = result[i++] + '0';
	res_str[j] = '\0';

	free(result);
	return (res_str);
}

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
	char *res;
	int i;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 0; argv[1][i]; i++)
	{
		if (!_isdigit(argv[1][i]))
		{
			printf("Error\n");
			exit(98);
		}
	}

	for (i = 0; argv[2][i]; i++)
	{
		if (!_isdigit(argv[2][i]))
		{
			printf("Error\n");
			exit(98);
		}
	}

	res = mul(argv[1], argv[2]);
	printf("%s\n", res);
	free(res);

	return (0);
}
