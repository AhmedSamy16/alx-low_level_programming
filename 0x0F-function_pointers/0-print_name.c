#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints a name
 * @name: a person's name
 * @f: a pointer to a function
 * Return: no return
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
