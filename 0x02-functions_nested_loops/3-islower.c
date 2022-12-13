#include "main.h"

/**
 * _islower - Check if a letter is lowercase or not
 * @c: a letter to be tested
 * Return: 1 if letter is lowercase else 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
