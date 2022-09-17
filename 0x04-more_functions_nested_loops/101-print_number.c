#include "main.h"

/**
 * print_number - A function that prints an integer
 * @n: int type number
 * Description: not allowed to use arrays or pointers
 * not allowed to hard-code special values
 * only use _putchar function to print
 */

void print_number(int n)
{
	unsigned int x;

	x = n;
	if (n < 0)
	{
		_putchar(45);
		x = -n;
	}
	if (x / 10)
		print_number(x / 10);
	_putchar((x % 10) + '0');
}
