#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints elements of a list_t list.
 * @h: The list_t list.
 * Return: The number of nodes in h.
 */
size_t print_list(const list_t *h)
{
	int len = 0;

	list_t *temp = h;

	while (temp != NULL)
	{
		if (!(temp->str))
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%i] %s\n", temp->len, temp->str);
		}
		temp = temp->next;
		len++;
	}
	return (len);
}
