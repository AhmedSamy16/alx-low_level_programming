#include "main.h"

int main(void)
{
	/**
	 * main - prints _putchar followed by a new line
	 *
	 * Return: Always 0 (Success)
	 */
	char name[] = "_putchar";

	int c;

	for (c = 0; c < 8; c++)
	{
		_putchar(name[c]);
	}
	_putchar("\n");
	return (0);
}
