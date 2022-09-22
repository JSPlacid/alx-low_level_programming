#include "main.h"
/**
 * rot13 -  encodes a string using rot13.
 * @s: input string to encode using the rot13
 * Return: an encoded string
 */

char *rot13(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if ((s[i] > 64 && s[i] < 91) || (s[i] > 96 && s[i] < 123))
		{
			if ((s[i] > 'a' && s[i] < 'm') ||
					(s[i] > 'A' && s[i] < 'M'))
				s[i] += 13;
			else
				s[i] -= 13;
			i++;
		}
		i++;
	}
	return (s);
}
