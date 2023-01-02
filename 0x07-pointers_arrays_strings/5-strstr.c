#include "main.h"

/**
 * _strstr - locates a substring.
 * @haystack: a string to be searched
 * @needle: a string to be found
 * Return: *haystack
 */


char *_strstr(char *haystack, char *needle)
{
	char *result = haystack;
	char *fneedle = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
				break;
		}
		if (!*needle)
			return (result);
		needle = fneedle;
		result++;
		haystack = result;
	}
	return (0);
}
