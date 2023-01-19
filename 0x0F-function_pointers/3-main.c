#include <3-calc.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - All the work ends here
 * @argc: the count of args provided
 * @argv: the args passed to the program
 * Return: int
 */

int main(int argc, char *argv[])
{
	int (*ptr)(int, int), result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	ptr = get_op_func(argv[2]);

	if (!ptr)
	{
		printf("Error\n");
		exit(99);
	}

	result = ptr( atoi(argv[1]), atoi(argv[3]) );
	printf("%d\n", result);
	return (0);
}
