#include "main.h"
/**
 * _strncat - concatenate two strings
 * src does not need to be null-terminated if it
 * contains n or more bytes
 * @dest: string
 * @src: string
 * @n: number of elements to concatenate in
 * Return: pointer to resulting `dest`
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, c;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (c = 0; src[c] != '\0' && n > 0; c++, i++)
	{
		dest[i] = src[c];
		i++;
	}
	return (dest);
}
