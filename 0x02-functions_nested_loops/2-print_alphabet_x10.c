#include "main.c"
/*
 * print_alphabet_x10 - Entry point
 *
 * Return: 0 (success)
 */
void print_alphabet_x10(void)
{
	char i;
	int b;

	for (b = 0; b < 10; b++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
}
