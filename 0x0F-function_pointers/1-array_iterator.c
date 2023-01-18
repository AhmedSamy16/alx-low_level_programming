#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes a function on each element of array
 * @array: an array to work on
 * @size: size of an array
 * @action: the function to be executed
 * Return: no return
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < (int)size; i++)
	{
		action(array[i]);
	}
}
