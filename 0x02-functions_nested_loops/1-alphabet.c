#include "main.h"
/**
 * main- Entry point
 *
 *Return: 0 (success)
 */
void print_alphabet(void);
int main(void)
{
	char ab;

	for (ab = 'a'; ab <= 'z'; ab++)
	{
		_putchar(ab);
	}
	_putchar('\n');
	return (0);
}	
