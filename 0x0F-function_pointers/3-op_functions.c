#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - adds two integers together
 * @a: int
 * @b: int
 * Return: int
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two integers together
 * @a: int
 * @b: int
 * Return: int
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two integers tgether
 * @a: int
 * @b: int
 * Return: int
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide two integers together
 * @a: int
 * @b: int
 * Return: int
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
 * op_mod - return the modulo of two integers
 * @a: int
 * @b: int
 * Return: int
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
