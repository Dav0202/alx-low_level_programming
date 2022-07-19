#include "lists.h"
/**
 * pop_listint - deletes the head node of a linked list
 * @head: head node
 * Return: head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *currentnode;
	int temp;

	if ((*head == NULL) || head == NULL)
	{
		return (0);
	}
	currentnode = *head;
	temp = currentnode->n;
	*head = *head->next;
	free(currentnode);
	return (temp);
}
