#include "lists.h"
/**
 * free_listint2 - a function that frees a listint_t list
 * @head: head node
 * Description: the function sets the head to NULL
 */
void free_listint2(listint_t **head)
{
	listint_t *currentnode;
	listint_t *tmpnode;

	if (head == NULL)
	{
		return;
	}
	currentnode = *head;
	while (currentnode != NULL)
	{
		tmpnode = currentnode;
		currentnode = tmpnode->next;
		free(tmpnode);
	}
	*head = NULL;
	head = NULL;
}
