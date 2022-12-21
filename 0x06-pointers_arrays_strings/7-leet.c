#include "main.h"

/**
 * leet - encode a string into 1337
 * @s: a string to be encoded
 * Return: an encoded string
 */

char *leet(char *s)
{
	int i, j;

	char *l = "oOlLeEaAtT";
	char *e = "0011334477";

	i = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (l[j] != '\0')
		{
			if (s[i] == l[j])
			{
				s[i] = e[j];
				break;
			}
		}
		i++;
	}

	return (s);
}
