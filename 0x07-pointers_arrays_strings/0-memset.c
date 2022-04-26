#include "main.h"

/**
 * _memset - fills the first n bytes of the memory ar
 * a pointed to by s with the constant byte b.
 * @s: iput pointer to string
 * @b: constant char
 * @n: length of bytes
 * Return: pointer returning srting
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int t = 0;

	while (t < n)
	{
		s[t] = b;
		t++;
	}
	return (s);
}
