#include "lists.h"

/**
 * add_node - function that add a new node at the end of a list t list
 * @head: pointer to struct
 * @str: name of new node
 * Return: struct
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	temp->len = _strlen(str);
	temp->next = NULL;
	if (head == NULL)
	{
		(*head)->next = temp;
	}
	else
	{
		temp->next = *head;
		(*head) = temp;
	}
	return (temp);
}

/**
 * _strlen - Function that returns the length of string
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
