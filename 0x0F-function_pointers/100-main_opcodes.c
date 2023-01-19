#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcodes - prints the opcodes of this program
 * @a: address of the main function
 * @n: number of bytes to print
 * Return: no return/
 */

void print_opcodes(char *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%.2hhx", a[i]);
		printf("%s", i < n - 1 ? " " : "\n");
	}
}

int main(int argc, char *argv[])
{
	int a;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	a = atoi(argv[1]);

	if (a < 0)
	{
		printf("Error\n");
		exit(2);
	}

	print_opcodes((char *)&main, a);
	return (0);
}
