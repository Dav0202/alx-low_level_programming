#include "lists.h"
/**
 * list_len - prints number of nodes
 * @h: first parameter
 * Return: number of elements
 */
list_len(const list_t *head)
{
  list_t *temp = head;

	unsigned int len = 0;

	while (temp != NULL)
	{
    temp = temp -> next;
		len++;
	}
	return (len);
}
