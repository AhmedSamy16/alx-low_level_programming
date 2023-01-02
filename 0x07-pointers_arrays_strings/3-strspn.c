#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: the string to be searched
 * @accept: the string to be found
 * Return: the length of the string
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, c;

	for (i = 0; s[i] != '\0'; i++)
	{
		c = 1;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				c = 0;
				break;
			}
		}
		if (c == 1)
			break;
	}
	return (i);
}
