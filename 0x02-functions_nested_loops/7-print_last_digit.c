#include "main.h"

/**
 * print_last_digit - prints the last digit of an int
 * @n: int parameter to be used
 * Return: The last didt number
 */

int print_last_digit(int n)
{
	int a;

	if (n < 0)
		n = -n;
	a = n % 10;
	_putchar(a + 48);
	return a;
}
