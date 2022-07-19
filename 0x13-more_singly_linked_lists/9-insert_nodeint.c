#include "lists.h"
/**
 * insert_nodeint_at_index - prints elements of a list_t list.
 * @head: head node
 * @n: number of input
 * @idx: is the index of the list where the new node should be added
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current;
	listint_t *newnode;

	uint i;

	newnode = malloc(sizeof(listint_t));
	if (!head || !newnode)
	{
		return (NULL);
	}
	newnode->n = n;
	if (!idx)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	current = *head;
	while (current)
	{
		if (i == idx - 1)
		{
			newnode->next = current->next;
			current->next = newnode;
			return (newnode);
		}
		i++;
		current = current->next;
	}
	free(newnode);
	return (NULL);
}
