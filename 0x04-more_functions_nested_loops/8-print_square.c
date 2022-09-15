#include "main"
/**
 * print_square - prints a square, followed by a new line.
 * @size: size of square.
 * Description: only use _putchar function to print
 * use # to print square
 */
void print_square(int size)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
