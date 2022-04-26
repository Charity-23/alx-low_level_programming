#include "main.h"

/**
 * _memcpy - input(copies n bytes from memory area src to memory area dest).
 * @dest: input pointer to string destination
 * @src: input pointer to source string
 * @n: number of bytes
 * Return: a pointer to destination string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int p = 0;

	while (p < n)
	{
		*(dest + p) = *(src + p);
		p++;
	}
	return (dest);
}
