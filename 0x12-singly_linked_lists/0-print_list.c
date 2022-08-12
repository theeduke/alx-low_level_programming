#include "lists.h"
/**
 * print_list - print elements of linked list
 * @h: pointer to the next node
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count;

	count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] and %s\n", h->len, h->str);

	h = h->next;

	count++;
	}
	return (count);
}
