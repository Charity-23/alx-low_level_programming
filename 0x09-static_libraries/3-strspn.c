#include "main.h"

/**
 * _strspn - finds the length of a prefix substring
 * @s: input string to find for substring
 * @accept: char that must be included in the prefix substring
 * Return: number of prefix subsrting
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n, k, a_len = 0, len = 0;

	while (accept[a_len] != '\0')
		a_len++;
	for (n = 0; s[n] != '\0'; n++)
		for (k = 0; k < a_len; k++)
			if (s[n] == accept[k])
				len++, k = a_len;
			else
				if (k == a_len - 1)
					goto exit;
exit: return (len);
}
