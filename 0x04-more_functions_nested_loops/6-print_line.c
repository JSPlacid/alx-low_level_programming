#include "main.h"
/**
 * print_line - function that draws a straight line in the terminal
 * @n: number of times undescore is printed.
 * Description: can only print with _putchar
 */

void print_line(int n)
{
	int c = 0;

	while (c < n)
	{
		_putchar('_');

		c++;
	}
	_putchar('\n');
}
