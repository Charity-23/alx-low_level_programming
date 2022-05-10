#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _memset - initializes n bytes of memory to x
 * @ptr: initial address
 * @x: variable to initialize with
 * @n: number of bytes to initialize
 *
 * Return: return pointer char(so moved one byte)
 */
char *_memset(char *ptr, int x, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		ptr[i] = x;

	return (ptr);
}

/**
 * _calloc - allocates memory using malloc and
 * initialize in 0
 * @nmemb: number of elements of array to allocate
 * @size: size of elements
 * Return: pointer to allocated memory or normal
 * process termination
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;


	if (nmemb == 0 || size == 0)
		return (0);

	p = malloc(nmemb * size);
	if (p == 0)
		return (0);
	_memset(p, 0, size * nmemb);

	return (p);
}
