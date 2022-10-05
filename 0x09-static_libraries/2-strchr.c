#include <stdio.h>
#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to locate the first occurrence of c
 * @c: character to locate
 * Return: A pointer to the first occurrence of c
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; 1; i++)
	{
		if (s[i] == c)
			return ((s + i));
		if (s[i] == 0)
			break;
	}
	return (NULL);
}
