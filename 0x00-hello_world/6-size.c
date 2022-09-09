#include <stdio.h>

/**
 * main - Prints out the sizes of various data types on the computer
 * Description: Print all the sizes of various c data types
 * REturn: 0 if success.
 */

int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));

	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));

	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(b));

	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(c));

	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));

	return (0);
}
