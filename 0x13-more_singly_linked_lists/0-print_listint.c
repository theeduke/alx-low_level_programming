#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint - returns number of nodes
 * @h: pointer to node head
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	
	while (h != NULL)
	{
		printf("%d\n", h->n);

		h = h->next;

		count++;
	}
	return (count);
}
