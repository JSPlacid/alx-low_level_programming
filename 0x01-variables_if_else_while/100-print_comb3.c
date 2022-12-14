#include <stdio.h>
/**
 * main -Entry point
 * Description: A program that prints all possible combos of two digits.
 * Numbers must be separated by comma followed by a space.
 * Print only the smallest combination of two digits.
 * Numbers should be printed in ascending order, with two digits.
 * You can only use the putchar function, not more than 5 times.
 * Do not use any variable of type `char`.
 * Return: 0
 */
int main(void)
{
	int i, j, k;

	i = 0;

	while (i < 100)
	{
		j = i % 10; /*single digits */
		k = i / 10; /*double digits */

		if (k < j)
		{
			putchar(k + '0');
			putchar(j + '0');

			if (i < 89)
			{
				putchar(44);
				putchar(32);
			}
		}
		i++;
	}
	putchar('\n');
	return (0);
}


