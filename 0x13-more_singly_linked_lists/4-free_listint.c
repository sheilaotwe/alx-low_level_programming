#include "lists.h"

/**
 * free_listint - Function that frees a listint_t list
 * @head: pointer to struct
 * Return: void function
 */
void free_listint(listint_t *head)
{
	listint_t *temp;
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
