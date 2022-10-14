#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: strings to print between each string
 * @n: number of strings passed to the function
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (str != NULL)
		{
			if (i == (n - 1))
			{
				printf("%s", str);
				break;
			}
			if (separator == NULL)
				printf("%s", str);
			else
				print("%s%s", str, separator);
		}
		else if (str == NULL)
		{
			if (i == (n - 1))
			{
				printf("(nill)");
				break;
			}
			if (separator == NULL)
				printf("(nil)");
			else
				printf("(nil)%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
