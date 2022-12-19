#include "main.h"

/**
 * rev_string - reverses a string
 * @s: a string to be reversed
 * Return: no return
 */

void rev_string(char *s)
{
	int i, j, len;
	char v1, v2;

	for (len = 0; s[len] != '\0'; len++);

	i = 0;
	j = len - 1;

	while (j > i)
	{
		v1 = s[i];
		v2 = s[j];
		s[i] = v2;
		s[j] = v1;
		j--;
		i++;
	}
}
