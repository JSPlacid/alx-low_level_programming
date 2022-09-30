#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <ctype.h>

/**
 * main - add 2 operands and prints result
 * @argc: argument count
 * @argv: argument vector
 * Description: if no number is passed, print 0
 * if one operand is NaN, print Error
 * Return: 1 if error, else 0
 */
int main(int argc, char *argv[])
{
	int i;
	char p = 0;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argv[i]; i++)
	{
		sum = strtol(argv[i], &p, 10);
		if (*p != 0)
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", total);
	return (0);
}
