#include <stdio.h>
#include <stdlib.h>

/**
 * _digit - checks if a string has digits
 * @argv: pointer to current item in argument
 * Return: 0 if all digits else 1
 */

int _isdigit(char *argv)
{
	int i;

	i = 0;
	while (argv[i])
	{
		if (argv[i] >= '0' &&argv[i] <= '9')
			i++;
		else
			return (1);
	}
	return (0);
}

/**
 * _atoi - converts a string of ASCII digits to the values
 * they represent
 * @s: pointer to the source string
 * Return: digits value
 */

int _atoi(char *s)
{
	int i, result;

	i = result = 0;
	while (s[i])
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			result *= 10;
			result += (s[i] - '0');
		}
		i++;
	}
	return (result);
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
