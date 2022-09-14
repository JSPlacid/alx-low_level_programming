#include "main.h"
/**
 * main - check code for Holberton School.
 * Description: Should return 0.
 * Return: Always 0.
 */

int main(void)
{
	char  c[] = "_putchar";
	int i = 0;

	while (c[i] != '\0')
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
