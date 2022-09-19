#include "main.h"
/**
 * _strcpy -  function that copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to string destination
 * @src: pointing to the source string it will copy from
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
		i++;
	dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
