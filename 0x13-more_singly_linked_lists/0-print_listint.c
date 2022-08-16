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

	if (h == NULL)
		printf("Make sure head pointer is not null");
	struct listint_t *ptr = NULL;

	ptr = h;

	while (ptr != NULL)
	{
		count++;

		ptr = ptr->next;
	}
	printf("%d", count);

	return (count);
}
