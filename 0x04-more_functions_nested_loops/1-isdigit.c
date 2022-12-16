#include "main.h"

/**
 * _isdigit - Check if a parameter is a digit (0-9)
 * @c: An integer to be tested
 * Return: (1) if parameter is a digit (0) otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);

	return (0);
}
