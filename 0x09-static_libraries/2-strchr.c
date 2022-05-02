#include "main.h"

/**
 * _strchr - locating char in a string.
 * @s: string input
 * @c: char to find
 * Return: pointer to the first occurrence of the character c in the string
 */

char *_strchr(char *s, char c)
{
	unsigned int l;

	for (l = 0; s[l] != '\0'; l++)
		if (s[l] == c)
			break;
	return (s[l] == c ? (s + l) : '\0');
}
