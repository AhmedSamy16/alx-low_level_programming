#include "main.h"
#include <math.h>

/**
 * reverse_array - reverse the content of an array
 * @a: array of integers
 * @n: the number of elements in an array
 * Return: no return
 */

void reverse_array(int *a, int n)
{
	int i, q, tmp;

	i = 0;
	q = n - 1;

	while (i <= ceil(n / 2))
	{
		tmp = a[i];
		a[i] = a[q];
		a[q] = tmp;
		i++;
		q--;
	}
}
