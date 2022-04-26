#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of square
 *                  matrix of integers.
 * @a: input square array
 * @size: size of one dimension in array
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int l, k, sum1 = 0, sum2 = 0;

	for (k = 0, l = size - 1; k < (size * size); k += size + 1, l += size - 1)
		sum1 += a[k], sum2 += a[l];
	printf("%d, %d\n", sum1, sum2);
}
