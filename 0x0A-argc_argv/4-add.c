#include <stdio.h>
#include <stdlib.h>
#include "main.h"

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
	int total, i;
	char p;
	int num;

	total = 0;
	if (argc > 1)
	{
		for (i = 1; argv[i]; i++)
		{
			num = strtol(argv[i], &p, 10);
			if (!*p)
				total += num;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", total);
	return (0);
}