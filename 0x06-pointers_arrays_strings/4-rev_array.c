#include "main.h"

/**
 * reverse_array - reverse array.
 * @a: array.
 * @n: the number of element.
 */

void reverse_array(int *a, int n)
{
	int h, l, p;

	l = n - 1;
	for (h = 0; h < n / 2; h++)
	{
		p = a[h];
		a[h] = a[l];
		a[l] = p;
		l--;
	}
}
