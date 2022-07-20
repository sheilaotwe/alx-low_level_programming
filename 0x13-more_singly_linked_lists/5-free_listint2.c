#include "lists.h"

/**
 * free_listint2 - Function that frees a listint_t list
 * @head: pointer to struct
 * Return: void function
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	if (head != NULL)
	{
		while (*head != NULL)
		{
			temp = *head;
			(*head) = (*head)->next;
			free(temp);
		}
		(*head) = NULL;
	}
}
