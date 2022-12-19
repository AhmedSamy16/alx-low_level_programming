#include "main.h"

/**
 * print_array - prints an array of integers followed of a new line
 * @a: array to be printed
 * @n: the length of the array
 * Return: no return
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf('\n');
}
