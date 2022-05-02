#include "main.h"

/**
 * _strncat - concatenate two words
 * @dest: first string.
 * @src: second string.
 * @n: the number of bytes to use from src.
 * Return: string
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (dest[a] != '\0')
		a++;

	while (src[b] != '\0' && n > b)
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	if (n > 0)
	{
		dest[a] = '\0';
	}

	return (dest);
}
