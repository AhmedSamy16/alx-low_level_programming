#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 *
 * Return: void
 */

void print_all(const char* const format, ...)
{
	va_list ap;
	char *str;
	int i = 0, j, c = 0;
	const char tags[] = "cifs";

	va_start(ap, format);
	while (format && format[i])
	{
		j = 0;
		while (tags[j])
		{
			if (tags[j] == format[i] && c)
			{
				printf(", ");
				break;
			}
			j++;
		}
		switch(format[i])
		{
			case 'i':
				printf("%d", va_arg(ap, int));
				c = 1;
				break;
			case 'c':
				printf("%c", va_arg(ap, int));
				c = 1;
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				c = 1;
				break;
			case 's':
				str = va_arg(ap, char *);
				c = 1;
				printf("%s", !str ? "(nil)" : str);
				break;
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}
