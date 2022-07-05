#include <stdio.h>
/**
 * main- Entry point
 *
 *Return: (0);
 */
void print_alphabet(void);
int main(void)
{
	char ab;

	for (ab = 'a'; ab <= 'z'; ab++)
	{
		putchar(ab);
	}
	putchar(' ');
	return (0);
}	
