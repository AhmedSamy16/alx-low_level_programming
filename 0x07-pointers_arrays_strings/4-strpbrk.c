#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: the string to be searched
 * @accept: the string to be found
 * Return: *s
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
