#include "lists.h"
/**
 * delete_nodeint_at_index - prints elements of a list_t list
 * @head: head node
 * @index: the index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	{
		listint_t *currentnode;
		listint_t *next;

		unsigned int i;

		if (!head || !(*head))
		{
			return (-1);
		}
		currentnode = *head;
		if (!index)
		{
			*head = currentnode->next;
			free(currentnode);
			return (1);
		}
		for (i = 0; currentnode && i < index - 1; i++)
		{
			currentnode = currentnode->next;
		}
		if (!currentnode || !(currentnode->next))
		{
			return (-1);
		}
		next = currentnode->next->next;
		free(currentnode->next);
		currentnode->next = next;
		return (1);
	}
}
