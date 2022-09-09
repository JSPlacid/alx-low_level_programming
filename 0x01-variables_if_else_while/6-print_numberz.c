#include <stdio.h>
/**
 * main - main block
 * Description: print all numbers of base 10, starting from 0.
 * Do not use any variable of type char.
 * Only use `putchar` to print to console.
 * You can only use `putchar` twice.
 * return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
