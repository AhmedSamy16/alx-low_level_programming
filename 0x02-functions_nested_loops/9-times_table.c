#include "main.h"

/**
 * times_table - Prints the 9 times table
 * Return: no return
 */

void times_table(void)
{
<<<<<<< HEAD
	int i, j, result;

	for (i = 0; i <= 9; i++)
	{
		_putchar(48);
		for (j = 1; j <= 9; j++)
		{
			_putchar(44);
			_putchar(32);
			result = i * j;
			if (result <= 9)
			{
				_putchar(32);
				_putchar(result + 48);
			}
			else
			{
				_putchar((result / 10) + 48);
				_putchar((result % 10) + 48);
			}
		}
		_putchar('\n');
	}
=======
        int i, j, result;

        for (i = 0; i <= 9; i++)
        {
                _putchar(48);
                for (j = 1; j <= 9; j++)
                {
                        _putchar(44);
                        _putchar(32);
                        result = i * j;
                        if (result <= 9)
                        {
                                _putchar(32);
                                _putchar(result + 48);
                        }
                        else
                        {
                                _putchar((result / 10) + 48);
                                _putchar((result % 10) + 48);
                        }
                }
                _putchar('\n');
        }
>>>>>>> f9080a9c4e0267839d445e549a683a9741a068e8
}
