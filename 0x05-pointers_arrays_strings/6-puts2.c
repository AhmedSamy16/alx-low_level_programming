#include "main.h"

/**
 * puts2 - prints every other charachter followed by a new line.
 * @str: a string to be printed
 * Return: no return
 */

void puts2(char *str)
{
	int i, len;

	for (len = 0; str[len] != '\0'; len++);

	for (i = 0; i < len - 1; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
