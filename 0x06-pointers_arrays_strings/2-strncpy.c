#include "main.h"

/**
 * _strncpy - copy src into dest.
 * @dest: first string
 * @src: second string
 * @n: the number of bytes to use from src.
 * Return: string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int l = 0, m = 0;

	while (n > m)
	{
		if (src[m] == '\0')
		{
			for (; m < n; m++)
			{
				dest[l] = '\0';


				l++;
			}


		}
		else
		{
			dest[l] = src[m];

			m++;
			l++;

		}
	}

	return (dest);
}



