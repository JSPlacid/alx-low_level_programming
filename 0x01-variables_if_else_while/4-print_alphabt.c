#include <stdio.h>
#include <stdlib.h>

/**
 * main Entry point
 * Description: Use `putchar` to print all letters except letters 'q' and 'e'.
 * Return: Always 0 (success)
 */


int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
			putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
