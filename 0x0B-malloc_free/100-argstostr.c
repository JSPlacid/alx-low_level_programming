#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenate all program arg with a new line
 * @ac: argument count
 * @av: doublr pointer to the array of string passed to main
 * Return: NULL if fail, else pointer to new string
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int len = 0, i = 0, j, k = 0;

	if (ac <= 0 || av == NULL)
		return (NULL);
	/*counts the length of every character in the argument*/

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
		len++;
	}
	len++;
	str = malloc(len * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';
	return (str);
}
