#include "main.h"
/**
 * _strncat - concatenate two strings
 * @dest: string
 * @src: string
 * @n: number of elements to concatenate in
 * Return: pointer to resulting `dest`
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (j = 0; dest[j] != '\0'; j++)
		;
	while (src[i] != '\0' && i < n)
	{
		dest[j +i] = src[i];
		i++;
	}
	return (dest);
}
