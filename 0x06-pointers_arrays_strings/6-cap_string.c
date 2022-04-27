#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @s: string to use.
 *
 * Return: string.
 */

char *cap_string(char *s)
{
	int l = 1, k, c;
char a[] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}', '\n', '\t', ' '};

	if (s[0] > 96 && s[0] < 123)
		s[0] -= 32;

	while (s[l] != '\0')
	{
		if (s[l] > 96 && s[l] < 123)
		{
			k = 0;
			c = 0;
			while (c == 0 && k < 13)
			{
				if (s[l - 1] == a[k])
				{
					c = 1;
				}
				k++;
			}
			if (c == 1)
			{
				s[l] -= 32;
			}
		}
		l++;
	}
	return (s);
}
