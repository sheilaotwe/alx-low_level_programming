#include "lists.h"

/**
 * list_len - Function that returns the number of elements in a linked list t
 * @h: list value
 * Return: data type list
 */

size_t list_len(const list_t *h)
{
	const list_t *temp = h;
	int node = 0;
	while (temp != NULL)
	{
		temp = temp->next;
		node++;
	}
	return (node);
}
