#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @s: string to encode.
 * Return: the encoded string.
 */

char *leet(char *s)
{
	int l = 0, k = 0;
	char array_leet[] = {'4', '3', '1', '0', '7'};
	char array_up[] = {'A', 'E', 'L', '0', 'T'};
	char array_low[] = {'a', 'e', 'l', 'o', 't'};

	while (s[l] != '\0')
	{
		for (k = 0; k < 5; k++)
		{
			if (s[l] == array_low[k] || s[l] == array_up[k])
			s[l] = array_leet[k];
		}
		l++;
	}
	return (s);
}
