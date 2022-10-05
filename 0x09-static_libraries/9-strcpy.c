#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies a string pointed to by src including the
 * terminating NULL byte (\0), to the buffer pointed to by dest
 * @dest: array to be returned as a pointer
 * @src: string to copy
 * Return: the string pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; 1; i++)
	{
		dest[i] = src[i];
		if (src[i] == 0)
			break;
	}
	return (dest);
}
