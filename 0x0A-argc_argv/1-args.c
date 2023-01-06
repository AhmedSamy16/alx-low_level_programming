#include <stdio.h>
/**
 * main - prints the number of argumnets passed into the program.
 * @argc: the number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 * Return: 0 (success)
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
