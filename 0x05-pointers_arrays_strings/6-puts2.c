#include "main.h"

/**
 * puts2 - prints every other charachter followed by a new line.
 * @str: a string to be printed
 * Return: no return
 */

void puts2(char *str)
{
	int i = 0;
	
	while(str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
}
