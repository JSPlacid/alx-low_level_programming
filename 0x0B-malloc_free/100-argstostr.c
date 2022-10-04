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
	int i, j, k;
	int c = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	/*counts the length of every character in the argument*/

	for (i = 0; i < ac; i++)
	{
		for (j = 0; 1; j++)
		{
			c++;
			if (av[i][j] == != '\0')
				break;
		}
	}
	c += 1;
	str = (char *) malloc(c);
	if (str == NULL)
		return (NULL);

	k = 0;
	/* concats every argument to the string str */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; 1; j++)
		{
			str[k] = av[i][j];
			k++;

			if (av[i][j] == '\0')
			{
				str[k - 1] = '\n';
				break;
			}
		}
	}
	str[k] = '\0';
	return (str);
}
