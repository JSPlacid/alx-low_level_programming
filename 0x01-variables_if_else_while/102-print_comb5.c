#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description: Prints all possible combos of two digit numbers.
 * The two numbers should be separated by a space.
 * Return: Always 0
 */

int main(void)
{
	int i, j;
	int a, b, c, d;

	for (i = 0; i < 100; i++)
	{
		a = i / 10; /*doubles fnum*/
		b = i % 10; /*singles fnum*/

		for (j = 0; j < 100; j++)
		{
			c = j / 10; /*doubles snum*/
			d = j % 10; /*singles snum*/

			if (a < c || (a == c && b < d))
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(',');
				putchar(c + '0');
				putchar(d + '0');
				if (a != 98 || b != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}
