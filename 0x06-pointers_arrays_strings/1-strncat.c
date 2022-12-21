#include "main.h"
#include <string.h>

/**
 * _strncat - concatenate two strings together
 * @dest: the first string
 * @src: the second string
 * @n: number
 * Return: a string
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = strlen(dest);
	int i = 0;

	while (i < n && *src)
	{
		dest[index + a] = *src;
		src++;
		i++;
	}
	dest[index + i] = '\0';
	return (dest);
}
