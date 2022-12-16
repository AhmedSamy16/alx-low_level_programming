#include "main.h"

/**
 * print_diagonal - Draws a diagonal line in the terminal
 * @n: the number of times the charachter \ should be printed
 * Return: no return
 */

void print_diagonal(int n)
{
	int i, j;

	i = 0;
	while(i < n)
	{
		for (j = 0; j < i; j++)
			_putchar(' ');

		_putchar('\\');
		_putchar('\n');
		i++;
	}
	if (n <= 0)
		_putchar('\n');
}
