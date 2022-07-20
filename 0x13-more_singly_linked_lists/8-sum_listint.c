#include "lists.h"

/**
 * sum_listint - Function that returns the sum of all the data, n
 * @head: pointer to struct
 * Return: int
 */
int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int count = 0;
	if (temp == NULL)
	{
		return (0);
	}
	while (temp != NULL)
	{
		count += temp->n;
		temp = temp->next;
	}
	return (count);
}
