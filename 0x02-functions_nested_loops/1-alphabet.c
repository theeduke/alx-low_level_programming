#include "main.h"
/**
 * print_alphabet - Entry point
 *
 *Return: 0 (success)
 */
void print_alphabet(void)
{
	char ab;

	for (ab = 'a'; ab <= 'z'; ab++)
	{
		putchar(ab);
	}
	putchar('\n');
}
