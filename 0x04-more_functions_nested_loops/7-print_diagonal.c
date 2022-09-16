#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: input integer
 */

void print_diagonal(int n)
{
	int i, j;

	i = 0;

	if (n > 0)
	{
		for (; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
		_putchar(92);
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
