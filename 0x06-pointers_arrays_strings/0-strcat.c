#include "main.h"

/**
 * _strcat - conatinate 2 strings.
 * @dest: first string.
 * @src: second string.
 * Return: string.
 */

char *_strcat(char *dest, char *scr)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;

	while (scr[j] != '\0')
	{
		dest[i] = scr[j];
		i++;
		j++;

	}

	dest[i] == '\0';

	return (dest);
}
