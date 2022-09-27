#include "main.h"
#include <stdio.h>

/**
 * rot13 -  encodes a string using rot13.
 * @s: input string to encode using the rot13
 * Return: an encoded string
 */

char *rot13(char *s)
{
	int i, j;
	char ucl[] = "NOPQRSTUVWXYZABCDEFGHIJKLM";
	char lcl[] = "nopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == ucl[j])
			{
				s[i] = lcl[j];
				break;
			}
		}
	}
	return (s);
}
