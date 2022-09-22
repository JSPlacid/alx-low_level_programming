#include "main.h"

/**
 * print_number - function that prints an integer.
 * @n: integer to print
 * Return: void
 */

void print_number(int n)
{
	int res, temp, expo;

	expo = 1;
	/*check for negatives*/
	if (n <= 0)
		res = n * -1;
	else
	{
		res = n;
		_putchar('-');
	}

	/*initialize exponent variable*/
	temp = res;
	while (temp <= -10)
	{
		expo *= 10;
		temp /= 10;
	}
	/*main*/
	while (expo >= 1)
	{
		_putchar(((res / expo) % 10) * -1 + '0');
		expo /= 10;
	}
}
