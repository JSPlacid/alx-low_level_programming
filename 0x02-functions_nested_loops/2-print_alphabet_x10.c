#include "main.h"
/**
 * main - main point
 * Description: prints alphabets in lowercase 10x, followed by a new line.
 * Return: Nothing.
 */

void print_alphabet_x10(void)
{
	int i;
	int c;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
