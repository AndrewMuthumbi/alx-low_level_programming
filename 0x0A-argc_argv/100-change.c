#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * min_coins - Calculates the minimum number of coins needed
 * to make change for a given amount of money.
 * @cents: The amount of money in cents
 *
 * Return: The minimum number of coins needed
 */

int min_coins(int cents)
{
int coins = 0;

while (cents > 0)
{
if (cents >= 25)
cents -= 25;
else if (cents >= 10)
cents -= 10;
else if (cents >= 5)
cents -= 5;
else if (cents >= 2)
cents -= 2;
else
cents -= 1;
coins++;
}

return (coins);
}

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Return: 0 on success, 1 on failure
 */

int main(int argc, char *argv[])
{
int cents;

if (argc != 2)
{
printf("Error\n");
return (1);
}

cents = atoi(argv[1]);

if (cents < 0)
{
printf("0\n");
return (0);
}

printf("%d\n", min_coins(cents));
return (0);
}
