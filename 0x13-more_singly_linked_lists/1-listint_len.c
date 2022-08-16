#include "lists.h"

/**
 * print_listint - returns number of elements of a list
 * @h: pointer to node head
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t counts = 0;
	
	while (h != NULL)
	{
		h = h->next;
		
		counts++;
	}
	return (counts);
}
