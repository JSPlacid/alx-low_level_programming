#include <stdio.h>
/**
 * main - Entry point
 * Description: print all numbers of base 16 in lowercase.
 * Only use `putchar`, not more than 3 times.
 * Return: 0
 */
int main(void)
{
	char c;
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (c = 'a'; c < 'g'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
