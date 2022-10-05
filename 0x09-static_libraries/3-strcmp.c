#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compares two strings
 * @s1: strings to compare
 * @s2: strings to compare
 * Return: 0 if equal, -15 if s1 < s2 & 15 if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] == s2[i]; i++)
	{
		if (s1[i] == 0)
			return (0);
	}
	return (s1[i] - s2[i]);
}
