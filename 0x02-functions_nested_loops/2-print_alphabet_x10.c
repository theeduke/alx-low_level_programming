#include "main.c"
/*
 * print_alphabet_x10 - Entry point
 * Description: prints lower alphabet
 *
 * Return: 0 (success)
 */
int main(void)
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
