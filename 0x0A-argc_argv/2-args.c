#include <stdio.h>
/**
 * main - prints all the arguments passed to the program.
 * @argc: the number of arguments passed to the program.
 * @argv: An array of pointers to the argumnets.
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
