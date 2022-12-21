#include "main.h"

/**
 * string_toupper - changes all lowercase charachters to uppercase
 * @s: a string
 * Return: an uppercase string
 */

char *string_toupper(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		i++;
	}

	return (s);
}
