#include "main.h"

/**
 * _strncpy - copies the string pointed by source to the buffer pointed by dest.
 * @dest: the destination
 * @src: the string to be copied
 * @n: number
 * Return: return a string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
