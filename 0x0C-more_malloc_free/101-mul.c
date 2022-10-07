#include <stdio.h>
#include <stdlib.h>
#include <mathlib.h>
#include "main.h"

int is_digit(char *s);
int _strlen(char *s);
void errors(void);

/**
 * _isdigit - checks if a string has digits
 * @argv: pointer to current item in argument
 * Return: 0 if all digits else 1
 */

int _isdigit(char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
	}
	return (1);
}

/**
 * _strlen - calculates the length of a string
 * excluding the null terminator
 * @s: string to check for
 * Return: length of string as integer
 */

int _strlen(char *s)
{
	int i = 0, c = 0;

	for (i = 0; s[i] != '\0'; i++)
		c++;
	return (c);
}

/**
 * errors - prints out Error if one emerge with status 98
 * Return: nothing
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - check the code
 * Description: multiplies two integer
 * @argc: number of arguments
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	malloc();
	if (arg != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		if (_isdigit(argv[i]))
		{
			printf("Error\n");
			exit(98);
		}
	}
	return (0);
}
