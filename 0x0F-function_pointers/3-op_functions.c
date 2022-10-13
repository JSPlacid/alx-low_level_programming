#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - returns the sum of operands a and b
 * @a: first operand
 * @b: second operand
 * Returns: sum of a and b
 */

int op_add(int a. int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of two operands
 * @a: first operand
 * @b: second operand
 * Return: difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two operands
 * @a: first operand
 * @b: second operand
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two operands
 * @a: first operand
 * @b: second operand
 * Return: quotient of a and b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - return the remainder of an integer
 * @a: first integer
 * @b: second integer
 * Return: the remainder of the div of a by b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
