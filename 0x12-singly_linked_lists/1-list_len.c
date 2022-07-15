#include "lists.h"
/**
 * list_len - prints number of nodes
 * @head: first parameter
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	unsigned int len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
