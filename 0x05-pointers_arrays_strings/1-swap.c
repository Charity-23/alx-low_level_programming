#include main.h

/**
 * swap_int - swaps the value of two integers.
 * 
 * @a: first integer
 * @b: second integer
 *
 */

void sawp_int(int *a, int *b)
{
	int c;

	c = 0;
	c = *a;
	*a = *b;
	*b = c;
}
