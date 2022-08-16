#include "lists.h"

/**
 * listint_len - returns number of elements of a list
 * @h: pointer to node head
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
