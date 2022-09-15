#include "main.h"
/**
 * print_most_numbers - prints the numbers, from 0 to 9, followed by a new line
 * excluding 2 and 4
 * Description: use _putchar twice in your code
 */

void print_most_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		if (i != 2 && i != 4)
			_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
