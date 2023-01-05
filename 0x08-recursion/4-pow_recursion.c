#include "main.h"

/**
 * _pow_recursion - return the value of x raised to the power of y.
 * @x: the base
 * @y: the power
 * Return: no return
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return(-1);
	if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}
