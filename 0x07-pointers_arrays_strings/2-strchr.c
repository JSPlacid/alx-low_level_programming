#include "main.h"
/**
 * _strchr - function that locates a character in a string
 * @s: string to locate the first occurence of c
 * @c: char to be located
 * Return: a pointer to first occurence of c
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; 1 ; i++)
	{
		if (s[i] == c)
			return ((s + i));
			if (s[i] == 0)
				break;
	}
		return (NULL);
}
