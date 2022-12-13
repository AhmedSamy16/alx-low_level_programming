#include "main.h"

/**
 * print_last_digit - prints the last digit of an int
 * @n: int parameter to be used
 * Return: The last didt number
 */

int print_last_digit(int n)
{
	int a;

	a = n % 10;
	if (a < 0)
	{
		_putchar(-a + 48);
		return (-a);
	}
	else
	{
		_putchar(a + 48);
		return (a);
	}
}
