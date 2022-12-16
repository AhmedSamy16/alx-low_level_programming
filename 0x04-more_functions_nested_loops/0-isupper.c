#include "main.h"

/**
 * _isupper - Checks if parameter c is an uppercase letter
 * @c: int representing a charachter
 * Return: (1) if @c is uppercase (0) otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
