#include <stdio.h>
#include <string.h>
#include "lists.h"
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
 * add_node - adds a node at the beginning
 * @head: first parameter
 * @str: second parameter
 * Return: node
 */
list_t *add_node_end(list_t **head, const char *str);
{
	list_t *newnode;

	newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->str = strdup(str);
	newnode->len = _strlen(str);
	newnode->next = *head;

	*head = newnode;

	return (newnode);
}
