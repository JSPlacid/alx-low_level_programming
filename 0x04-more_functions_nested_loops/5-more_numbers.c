#include "main.h"
/**
 * more_numbers - prints numbers from 0 to 14 ten places each on new line
 * Description: use _putchar only 3 times
 */

void more_numbers(void)
{
	int c, i;

	c = 0;

	while (c < 10)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			i++;
		}
		_putchar('\n');
	}
}
