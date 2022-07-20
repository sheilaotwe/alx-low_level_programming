#include "lists.h"

/**
 * insert_nodeint_at_index - Function that inserts a new node at given position
 * @head: pointer to struct
 * @idx: index
 * @n: data
 * Return: struct
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = NULL;
	listint_t *prev = NULL;
	unsigned int i = 0;
	
	temp = malloc(sizeof(listint_t));
	if ((temp == NULL) || idx > list_len(*head))
	{
		free(temp);
		return (NULL);
	}
	temp->n = n;
	temp->next = NULL;
	while (head != NULL)
	{
		if (i == idx)
		{
			if (i == 0)
			{
				temp->next = *head;
				*head = temp;
				return (temp);
			}
			temp->next = prev->next;
			prev->next = temp;
			return (temp);
		}
		if ((i + 1) == idx)
			prev = *head;
		head = &((*head)->next);
		i++;
	}
	return (NULL);
}

/**
 * list_len - Function that print number of nodes
 * @h: value of list
 * Return: any data type list
 */
size_t list_len(const listint_t *h)
{
	const listint_t *temp = h;
	size_t node = 0;
	while (temp != NULL)
	{
		temp = temp->next;
		node++;
	}
	return (node);
}
