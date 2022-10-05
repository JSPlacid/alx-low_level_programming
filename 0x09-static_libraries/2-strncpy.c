#include <stdio.h>
#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: pointer to the string destination
 * @src: pointer to the source string
 * @n: number of bytes from src to be copied
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != 0 && i < n; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
