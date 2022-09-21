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
	int i = 0;
	int srclnt = 0;
	char *temp = dest, *start = src;

	while (*src)
	{
		srclnt++;
		src++;
	}

	while (*dest)
		dest++;

	if (n > srclnt)
		n = srclnt;

	src = start;

	for (; i < n; i++)
		*dest++ = *src++;
	*dest = '\0';
	return (temp);
}
