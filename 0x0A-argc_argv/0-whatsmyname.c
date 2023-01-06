#include <stdio.h>

/**
 * main - prints the name of the program's file.
 * @argc: the number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * Return: 0 (success)
 */

int main(int argc __attribute((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
