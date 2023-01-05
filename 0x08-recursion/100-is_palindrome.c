#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: the string to be counted
 * Return: int
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

/**
 * compare - compare string from a start point to an end point.
 * @s: the string to be checked
 * @n1: first index
 * @n2: last index
 * Return: 1 or 0
 */

int compare(char *s, int n1, int n2)
{
	if (s[n1] == s[n2])
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return compare(s, n1 + 1, n2 - 1);
	}
	return (0);
}

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 * @s: the string to be checked
 * Return: 1 or 0
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return compare(s, 0, _strlen_recursion(s) - 1);
}
