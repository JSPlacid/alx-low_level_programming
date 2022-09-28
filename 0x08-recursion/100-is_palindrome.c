#include "main.h"

/**
 * _strlen_recursion - returns the length of a  string
 * @s: string to count
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		s++;
		return (1 + _strlen_recursion(s));
	}
	return (0);
}

/**
 * check - helper function for is_pallindrome
 * @string: the string
 * @len: string length
 * @count: recursion counter
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int check(int *str, int len, int count)
{
	if (count >= len)
		return (1);
	if (str[len] == str[count])
		return (check(str, len - 1, count + 1));
			return (0);
}

/**
 * is_pallindrome - determines whether a string is a pallindrome
 * @s: string to be determined
 * Return: 1 if a string is a palindrome else 0
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);
	int count = 0;

	return (check(s, len - 1, count));
}
