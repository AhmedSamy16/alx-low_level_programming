#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints all numbers followed by new line
 * @separator: what should be printed between numbers
 * @n: the count of numbers
 * Return: void
 */

void print_numbers(const char *separator, unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	va_end(ap);
	putchar('\n');
}
