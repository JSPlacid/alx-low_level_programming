#include "main.h"
/**
 * rev_string -  reverses a string.
 * @s: char array string type
 */

void rev_string(char *s)
{
	int len = 0, i = 0;
	char h;

	while (s[len] != '\0')
		len++;

	while (i < len--)
	{
		h = s[i];
		s[i++] = s[len];
		s[len] = h;
	}
}
