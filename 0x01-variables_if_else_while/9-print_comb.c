#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: Print all possible combinationss for single-digit numbers.
 * numbers must be separated by commas and space.
 * Use `putchar` only to print in console.
 * Use `putchar` not more than four times.
 * Do not use any variable of type `char`.
 * Return: 0
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0')
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
