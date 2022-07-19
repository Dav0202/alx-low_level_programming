#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning
 * of a listint_t list
 * @head: head node
 * @n: number of input value
 * Return: address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));

	if (!head || !newnode)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;
	if (*head)
	{
		newnode->next = *head;
	}
	*head = newnode;
	return (newnode);
}
