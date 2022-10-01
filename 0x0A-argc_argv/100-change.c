#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main -  prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	unsigned int cents;
	int coins;

	cents = coins = 0;
	if (argc == 2)
	{
		if (argv[1][0] == '-')
			printf("0\n");
		if (checker(argc, 1, 0, argv) == 0)
		{
			cents = atoi(argv[1]);
			for (; cents >= 25; coins++, cents -= 25)
				;
			for (; cents >= 10; coins++, cents -= 10)
				;
			for (; cents >= 5; coins++, cents -= 5)
				;
			for (; cents >= 2; coins++, cents -= 2)
				;
			for (; cents >= 1; coins++, cents--)
				;
			printf("%d\n", coins);
		}
	}
	else
		printf("Error\n");
	return (0);
}

/**
 * checker - checks for valid input
 * @argc: argument count
 * @argv: argument vector
 * @i: counter for argv[]
 * @j: counter for argv[][]
 * Return: 0, else 1
 */

int checker(int argc, int i, unsigned int j, char *argv[])
{
	for (i = 1; i < argc; i++)
		for (j = 0; argv[i] != '\0' && j < strlen(argv[i]; j++)
				if (isdigit(argv[i][j]) == 0)
				return (1);
	return (0);
}
