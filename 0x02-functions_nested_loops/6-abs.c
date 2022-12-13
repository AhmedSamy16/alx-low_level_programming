#include "main.h"

/**
 * _abs - return the absolute value of an int
 * @n: an int from which to get the absolute value
 * Return: The absolute value of the parameter
 */

int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}
