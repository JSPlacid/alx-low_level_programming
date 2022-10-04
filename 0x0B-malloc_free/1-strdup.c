#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copies a string
 * @str: string to copy
 * Return: a pointer to the newly allocated space in memory
 * which contains a copy of the given string
 */

char *_strdup(char *str)
{
	int i, c = 0;
	char *ns;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;

	ns = malloc(i * sizeof(*ns) + 1);
	if (ns == NULL)
		return (NULL);

	for (c = 0; c < i; c++)
		ns[c] = str[c];
	ns[c] = '\0';
	return (ns);
}
