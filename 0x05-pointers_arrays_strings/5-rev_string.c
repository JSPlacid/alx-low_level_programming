#include "main.h"
/**
 * rev_string -  reverses a string.
 * @s: char array string type
 */

void rev_string(char *s)
{
	int i, c, l;
	char h;

	for (i = 0; s[i] != '\0'; i++)
		;

	l = 1;

	for (i--, c = 0; c < l / 2; i--, c++)
	{
		h = s[c];
		s[c] = s[i];
		s[i] = h;
	}
}
