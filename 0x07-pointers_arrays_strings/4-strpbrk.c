#include "main.h"

/**
 * _strpbrk - locates first matching char in string
 * @s: input string to search for matching char
 * @accept: chars that could be matched
 * Return: pointer to marching char
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int l, k;

	for (l = 0; s[l] != '\0'; l++)
		for (k = 0; accept[k] != '\0'; k++)
			if (s[l] == accept[k])
				goto exit;
exit: return (s[l] != '\0' ? s + l : '\0');
}
