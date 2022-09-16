#include "main.h"

/**
 * print_triangle -  prints a triangle, followed by a new line
 * Description: You can only use _putchar function to print
 * Where size is the size of the triangle
 * If size is 0 or less, the function should print only a new line
 * Use the character # to print the triangle
 * @size: size of triangle
 */

void print_triangle(int size)
{
	int c = 0;
	int j;
	int i = size - 1;

	while (c < size)
	{
		i = size - 1 - c;
		j = c + 1;

		while (i > 0)
		{
			_putchar(' ');
			i--;
		}
		while (j > 0)
		{
			_putchar('#');
			j--;
		}
		_putchar('\n');
		c++;
	}
	if (size <= 0)
		_putchar('\n');
}
