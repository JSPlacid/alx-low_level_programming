#include "function_pointers.h"
/**
 * print_name - prints a name from a function pointer
 * @name:char string of name
 * @f: function pointer that takes a string argument
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
