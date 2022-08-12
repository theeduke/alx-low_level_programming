#include "lists.h"
/**
 * document here
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	unsign int;

	while (h != NULL)
	{
		if (h ->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%u] and %s\n", h -> len, h-> str);
	count ++;

	h = h-> next;

	} 
	return (count);
}
