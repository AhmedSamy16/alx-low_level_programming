#include "main.h"
#include <stdio.h>

/**
 * main - FizzBuzz Test
 *
 * Return: Always (0)
 */

int main(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("%s", "FizzBuzz");
		else if (i % 3 == 0)
			printf("%s", "Fizz");
		else if (i % 5 == 0)
			printf("%s", "Buzz");
		else
			printf("%d", i);

		if (i != 100)
			printf("%c", ' ');
		i++;
	}
	printf("%c", '\n');
	return (0);
}
