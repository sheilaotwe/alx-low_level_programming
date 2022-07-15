#include "lists.h"

/**
 * add_node_end - Function that add new node at end of the list
 * @head: pointer to struct
 * @str: new node
 * Return: struct
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp = malloc(sizeof(list_t));
	list_t *last = *head;

	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	temp->len = _strlen(str);
	temp->next = NULL;
	if (*head == NULL)
	{
		*head = temp;
	}
	else
	{
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = temp;
	}
	return (temp);
}

/**
 * _strlen - Function that returns string length
 * @s: string to check
 * Return: string length
 */
int _strlen(const char *s)
{
	int var;
	int output = 0;
	for (var = 0; s[var] != '\0'; var++)
	{
		output += 1;
	}
	return (output);
}
