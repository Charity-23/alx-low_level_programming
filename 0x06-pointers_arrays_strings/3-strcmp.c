#include "main.h"

/**
 * _strcmp - Comparing 2 strings.
 * @s1: first string.
 * @s2: second string.
 * Return: int.
 */

int _strcmp(char *s1, char *s2)
{
	int n = 0, g = 0;

	while (s1[n] != '\0' && s2[n] != '\0' && g == 0)
	{
		g = s1[n] - s2[n];
		n++;
	}

	return (g);
}
