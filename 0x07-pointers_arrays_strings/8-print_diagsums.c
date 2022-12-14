#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix of integers.
 * @a: matrix
 * @size: int
 * Return: no return
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0, i;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + (size * i + i));
		sum2 += *(a + (size * i + size - i - 1));
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
