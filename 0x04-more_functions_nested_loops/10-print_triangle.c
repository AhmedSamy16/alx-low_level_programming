#include "main.h"

/**
 * print_triangle - Draws a triangle in the terminal
 * @size: The size of the triangle
 * Return: no return
 */

void print_triangle(int size)
{
	int i, j;

	i = 1;
	while (i <= size)
	{
		for (j = 0; j < size - i; j++)
			_putchar(' ');
		for (j = 0; j < i; j++)
			_putchar('#');
		_putchar('\n');
		i++;
	}
	if (size <= 0)
		_putchar('\n');
}
