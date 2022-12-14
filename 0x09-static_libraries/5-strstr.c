#include "main.h"
#include <stdio.h>
/**
 * _strstr - locates a substring
 * @haystack: string to be tested
 * @needle: the substring to search for
 * Return: A pointer to the beginning of the located
 * substring, or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j = 0, k;

	for (i = 0; haystack[i] != 0; i++)
	{
		k = i;
		j = 0;
		for (; needle[j] != 0;)
		{
			if (haystack[k++] == needle[j++])
			{
				continue;
			}
			break;
		}
		if (needle[j] == '\0')
			return ((haystack + i));
	}
	return (NULL);
}
