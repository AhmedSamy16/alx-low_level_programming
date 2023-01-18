#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - searches for an element
 * @array: an array to be searched
 * @size: the size of array
 * @cmp: a comparing function
 * Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return -1;

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
			return (i);
	}

	return (-1);
}
