#include "variadic_functions"
#include <stdarg.h>

/**
 * print_numbers - print each number with a separator,
 * followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of args passed
 * Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
		{
			printf("%d", va_arg(args, int));
			break;
		}
		if (separator == NULL)
			printf("%d", va_arg(args, int));
		else
			printf("%d%s", va_arg(args, int), separator);
	}
	va_end(args);
	printf("\n");
}
