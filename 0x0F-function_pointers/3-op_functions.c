#include "3-calc.h"

/**
 * op_add - adds two integers
 * @a: the 1st integer
 * @b: the second integer
 * Return: the result of a + b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - sub two integers
 * @a: the 1st integer
 * @b: the second integer
 * Return: the result of a - b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - mul two integers
 * @a: the 1st integer
 * @b: the second integer
 * Return: the result of a * b
 */

int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - returns the quotient of two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the quotient of the two integers
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
 * op_mod - computes a % b
 * @a: the 1st integer
 * @b: the second integer
 * Return: the result of a % b
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
