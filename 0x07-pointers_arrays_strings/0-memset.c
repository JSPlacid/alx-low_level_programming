#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @s: area of memory to be filled
 * @b: character to fill the area with
 * @n: the number of bytes to fill
 * Return: char*
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
