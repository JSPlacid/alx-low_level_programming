#include <stdio.h>
/**
 * main - Entry point
 * Descripyion: Prints all possible diff. combos of three digits.
 * The three digits must be different.
 * Print only the smallest combination of three digits.
 * Numbers should be printed in ascending order, with three digits.
 * You can only use the putchar function.
 * Return: 0
 */
int main(void)
{
	int i, j, k, l;

	for (i = 0; i < 1000; i++)
	{
		j = i / 100; /*hundreds*/
		k = (i / 10) % 10; /*tens*/
		l = i % 10; /*singles*/

		if (j < k && k < l)
		{
			putchar(j + '0');
			putchar(k + '0');
			putchar(l + '0');

			if (i < 700)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
			

