#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints elements of a list_t list.
 * @h: The list_t list.
 * Return: The number of nodes in h.
 */
print_list(const list_t *head)
{
  int len = 0;

  list_t *temp = head;

	while (temp != NULL)
	{
	    if (!(temp -> str))
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%i] %s\n", temp -> len, temp -> str);
		}
		temp = temp -> next;
		len++;
	}
	return (len);
}
