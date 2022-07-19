#include "lists.h"
/**
 * add_nodeint_end - adds a new node at theend of a listint_t list.
 * @head: head node
 * @n: number of input nodes
 * Return: address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));
	listint_t *currentnode;

	if (head == NULL || newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		currentnode = *head;
		while (currentnode->next != NULL)
		{
			currentnode = currentnode->next;
		}
		currentnode->next = newnode;
	}
	return (newnode);
}
