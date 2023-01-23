#include <stdio.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: what should be printed between strings
 * @n: the number of strings passed to a function
 * Return: void
 */

void print_strings(const char* separator, unsigned int n, ...)
{
	va_list ap;
	char *p;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (separator != NULL && i != 0)
			printf("%s", separator);
		p = va_arg(ap, char *);
		printf("%s", (p == NULL) ? "(nil)" : p);
	}
	putchar('\n');
	va_end(ap);
}
