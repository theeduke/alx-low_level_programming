#include "lists.h"
/**
 * document here
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	unsign int;

	if (h == NULL)
		return (0);
	while (h)
	{
		if (h -> str == null)
			printf("[0] and (nil)");
		else
			printf("[%u] and %s\n", h -> len, h-> str);
	count ++;
	h = h-> next;
	} 
	return (count);
}
