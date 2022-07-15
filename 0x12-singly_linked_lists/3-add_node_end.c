#include "lists.h"
#include <string.h>
/**
 * _strlen - counts the lenght of a string
 * @str: string to be counted
 * Return: len of a string
 */
int _strlen(const char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * add_node_end - adds node at the end of a linked list
 * @head: head pointer
 * @str: input string
 * Return: address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *temp;
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	temp = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	new->str = temp;
	new->len = _strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		last = *head;
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = new;
	}
	return (*head);
}
