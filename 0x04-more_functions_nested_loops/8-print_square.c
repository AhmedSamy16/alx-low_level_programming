#include "main.h"

/**
 * print_square - Draws a square in the terminal
 * @size: The size of the square
 * Return: no return
 */

void print_square(int size)
{
	int i, j;

	i = 0;
	while (i < size)
	{
		for (j = 0; j < size; j++)
			_putchar('#');
		_putchar('\n');
		i++;
	}
	if (size <= 0)
		_putchar('\n');
}
