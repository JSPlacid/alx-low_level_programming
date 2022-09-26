#include "main.h"
/**
 * _strstr -  a function that locates a substring.
 * @s: string to search for
 * @accept: string with pattern to be matched
 * Return:  a pointer to the beginning of the located substring
 * or NULL if the substring is not found.
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != 0; i++)
	{
		for (j = 0; accept[j] != 0; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return (NULL);
}
