#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: input integer
 * Return: Always 0
 */

void print_diagonal(int n)
{
	int i, j;

	for (j = 1; j <= n; j++)
	{
		for (i = 1; i < j; i++)
		{
			if (i != 1)
				_putchar(' ');
			else
			{
				_putchar('\\');
			}
		}
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
