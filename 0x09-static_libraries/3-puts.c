#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string, followed by new line to stdout
 * @s: string of characters to be printed
 * Return: 0
 */

void _puts(char *s)
{
	int i;

	for (i = 0; 1; i++)
	{
		if (*(s + i) == 0)
		{
			printf("\n");
			break;;
		}
		printf("%c", *(s + i));
	}
}
