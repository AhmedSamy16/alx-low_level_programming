#include "main.h"
/**
 * jack_bauer - prints the time between 00:00 to 23:59
 * Return: no return
 */

void jack_bauer(void)
{
	int i, j;

	i = 0;
	while (i < 24)
	{
		j = 0;
		while (j < 60)
		{
			_putchar((i / 10) + 48);
			_putchar((i % 10) + 48);
			_putchar(':');
			_putchar((j / 10) + 48);
			_putchar((j % 10) + 48);
			_putchar('\n');
			j++;
		}
		i++;
	}
}
