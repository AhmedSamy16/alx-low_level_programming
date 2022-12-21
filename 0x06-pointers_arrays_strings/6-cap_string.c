#include "main.h"

/**
 * cap_string - capitalize all words of a string
 * @s: a string
 * Return: a string
 */

char *cap_string(char *s)
{
	int i, j;
	char sep_word[] = {' ', '\n', '\t', ',', ';', '!', '?', '"', '.', '(', ')', '{', '}'};

	i = 0;

	while (s[i] != '\0')
	{
		if (s[0] >= 97 && s[0] <= 122)
		{
			s[0] -= 32;
			i++;
			continue;
		}
		for (j = 0; j < 13; j++)
		{
			if (s[i - 1] == sep_word[j] && s[i] >= 97 && s[i] <= 122)
			{
				s[i] -= 32;
				break;
			}
		}

		i++;
	}

	return (s);
}
