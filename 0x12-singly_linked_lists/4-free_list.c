#include "lists.h"

/**
 * free_list - function that frees a list t list
 * @head: pointer to struct
 * Return: pointer to struct
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
