#include "main.h"

/**
 * swap_int - swaps the values of two inegers
 * @a: the first parameter
 * @b: the second parameter
 * return: no return
 */

void swap_int(int *a, int *b)
{
	int c;

	c = 0;
	c = *a;
	*a = *b;
	*b = c;
}
