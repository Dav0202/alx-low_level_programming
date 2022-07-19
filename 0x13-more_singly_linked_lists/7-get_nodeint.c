#include "lists.h"
/**
 * get_nodeint_at_index - prints elements of a list_t list
 * @head: head node
 * @index: index of the node, starting at 0
 * Return: the current node, else, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int count;
	listint_t *currentnode;

	count = 0;
	currentnode = head;

	if (!(currentnode))
	{
		return (NULL);
	}
	while (currentnode != NULL)
	{
		if (count == index)
		{
			return (currentnode);
		}
		count++;
		currentnode = currentnode->next;
	}
	return (currentnode);
}
