#include "main.h"

/**
 * _strstr -  finds the first occurrence of the substring needle in the string
 *            haystack.
 * @haystack: string to search for substring in the str haystack
 * @needle: substring to find match of
 * Return: pointer to the beginning of located spring.
 */

char *_strstr(char *haystack, char *needle)
{
	int k;

	while (*haystack != '\0')
	{
		k = 0;
		while (*haystack == *needle && *haystack != '\0' && *needle != '\0')
			haystack++, needle++, k++;
		if (*needle == '\0')
			return (haystack - k);
		haystack -= (k - 1), needle -= k;
	}
	return ('\0');
}
