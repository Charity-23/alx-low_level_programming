#include "lists.h"

/**
 * list-len - returns the number of element in a
 * linked list
 * @h: linked list argument
 *
 * Return: number of element in list
 */

size_t list_len(const list_t *h)
{
	const list_t *temp;
	unsigned int counter = 0;

	temp = h;
	while (temp)
	{
		counter++;
		temp = temp->next;
	}
	return (counter);
}
