#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: a string to be printed
 * Return: no return
 */

void puts_half(char *str)
{
	int i, n, len;

	for (len = 0; str[len] != '\0'; len++);

	n = (len - 1) / 2;

	for (i = n + 1; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
