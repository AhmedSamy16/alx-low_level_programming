#include "main.h"

/**
 * _strlen - Finds the length of a string
 * @s: the string to find its length
 * return: int of the length of the string
 */

int _strlen(char *s)
{
	int i, len;

	for (i = 0; s[i] != '\0'; i++)
		len++;
	return (len);
}
