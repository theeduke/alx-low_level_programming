#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (0)
 */
int main(void)
{
	char word[8] = "_putchar";
	int a;

	for (a = 0; a < 8; a++)
	{
		putchar(word[a]);
	}

	putchar('\n');

	return (0);
}
