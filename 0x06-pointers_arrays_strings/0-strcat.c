#include "main.h"

/**
 * _strcat - conicatinate 2 strings.
 * @dest: first string.
 * @src: second string.
 * Return: string.
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, k = 0;

	while (dest[i] != '\0')
		i++;

	while (src[k] != '\0')
	{
		dest[i] = scr[k];
		i++;
		k++;

	}

	dest[i] = '\0';

	return (dest);
}
