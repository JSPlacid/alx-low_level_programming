#include "variadic_functions"
#include <stdio.h>

/**
 * print_numbers - print each number with a separator,
 * followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of args passed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
