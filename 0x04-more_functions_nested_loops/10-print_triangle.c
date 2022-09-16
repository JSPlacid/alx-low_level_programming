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
	int i = 0, j, n = size -1;

	if (size > 0)
	{
		for (i = 1; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j < n)
					_putchar(' ');
				else
					_putchar('#');
			}
			n--;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}	
