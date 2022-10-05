#include "main.h"
#include <stdio.h>

/**
 * memcpy - copies a memory area
 * @dest: destination buffer
 * @src: source buffer
 * @n: area size
 * Return: 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
