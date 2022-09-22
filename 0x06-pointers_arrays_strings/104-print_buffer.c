#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer.
 * @b: pointer to string
 * @size: total number of bytes
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int c, g;

	c = 0;
	if (size <= 0)
	{
		printf("\n");
	}
	while (c < size)
	{
		printf("%8.8x:", c);
		g = 0;
		while (g < 10)
		{
			printf("%02x", b[c + g]);
			if ((g % 2 == 0 && g != 0) || (c + g > size - 1))
			{
				printf(" ");
			}
			g++;
		}
		c += 10;
		printf("\n");
	}
}
