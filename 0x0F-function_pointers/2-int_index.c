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
	int i = 0;

	if (array == NULL || cmp == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
