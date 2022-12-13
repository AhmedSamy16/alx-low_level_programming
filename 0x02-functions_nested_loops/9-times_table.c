#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 * Return: no return
 */

void time_teble(void)
{
	int i, j;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while(j < 10)
		{
			_putchar((i * j) + 48);
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
