#include <stdio.h>
/**
 * main - multiplies the arguments passed to the program
 * @argc: the number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
