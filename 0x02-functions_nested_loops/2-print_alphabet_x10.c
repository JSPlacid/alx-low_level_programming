#include "main.h"

/**
 * main - main point
 * Description: prints 10 times the alphabets in lowercase, followed by a new line.
 * Return: Nothing.
 */

void print_alphabet_x10(void)
{
	int i;
	int alp;

	for (i = 0; i <= 10; i++)
	{
		for(alp = 'a'; alp <= 'z'; alp++)
		{
			_putchar(alp);
		}
		_putchar('\n');
	}
}
