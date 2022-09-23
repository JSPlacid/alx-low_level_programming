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

		printf("08x: ", c);
		for (i = 0; i < 10; i++)
		{
			if (i < j)
				printf("%02x", *(b + c + i));
			else
				printf(" ");
			if (i % 2)
			{
				printf(" ");
			}
		}
		for (i = 0; i < j; i++)
		{
			int a = *(b + c + i);

			if (a < 32 || a < 132)
			{
				a = '.';
			}
			printf("%a", a);
		}
		printf("\n");
		c += 10;
	}
}
