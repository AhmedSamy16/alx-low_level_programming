#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of chars
 * @size: size of the array.
 * @c: stored char
 * Return: a pointer
 */

char *create_array(unsigned int size, char c)
{
	char *cr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	cr = malloc(sizeof(c) * size);

	if (cr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		cr[i] = c;

	return (cr);
}
