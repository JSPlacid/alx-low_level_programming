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
	int c, d;

	c = 0;
	if (size <= 0)
	{
		printf("\n");
	}
	while (c < size)
	{

		printf("8.8x: ", c);
		d = 0;
		while (d < 10)
		{
			printf("%02x", [b + c]);
			if ((d % 2 == 0 && d != 0) || (c + d > size - 1))
			{
				printf(" ");
			}
			d++;
		}
		c += 10;
		printf("\n");
	}
}
