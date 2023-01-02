#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: the string to be searched
 * @c: a charachter to be found
 * Return: a pointer to the first occurrence of the character c in the string s, or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (0);
}
