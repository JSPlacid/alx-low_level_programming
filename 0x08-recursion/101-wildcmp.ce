#include "main.h"

/**
 * wildcmp -  compares two strings and returns 1 if the
 * strings can be considered identical, otherwise return 0
 * @s1: first string input
 * @s2: second string input
 * Return: 1 if strings can be considered similar, else 0
 */

int wildcmp(char *s1, char *s2)
{
	if (!*s1 && !*s2)
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*' && (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2)))
		return (1);
	if (*s2 == '*' && *(s1 + 1) && *s2)
		return (0);
	return (0);
}
