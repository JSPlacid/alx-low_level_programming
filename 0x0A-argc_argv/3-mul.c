#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - multiply two operands passed to main
 * @argc: argument count
 * @argv: argument vector
 * Returns: 1 if error else 0
 */

int main(int argc, char *argv[])
{
	(void) argc;

	if (argv[1] && argv[2])
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
		printf("Error\n");
	return (1);
}
