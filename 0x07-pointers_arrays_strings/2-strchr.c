#include "main.h"
/**
 * _strchr - function that locates a character in a string
 * @s: string to locate the first occurence of c
 * @c: char to be located
 * Return: a pointer to first occurence of c
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	}
	return (s + 1);
}
