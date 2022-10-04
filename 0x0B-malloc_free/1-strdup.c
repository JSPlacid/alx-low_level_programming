#include "main.h"
#include <stdlib>

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

	ns = malloc(c * sizeof(*ns));
	if (ns == null)
		return (NULL);

	for (i = 0; i < c; i++)
		ns[i] = str[i];
	return (ns);
}
