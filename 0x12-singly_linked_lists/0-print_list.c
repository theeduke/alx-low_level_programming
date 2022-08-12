#include "lists.h"
/**
 * print_list - print elements of linked list
 * @h: pointer to the nexr node
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (!h ->str)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%u] and %s\n", h -> len, h-> str);

	h = h-> next;

	count ++;

	} 
	return (count);
}
