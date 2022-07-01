#include <stdio.h>
/**
 * main - Entry point
 *
 * Return:0 (success)
 */
int main(void)
{
	int i;
	char b;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}

	for (b = 'a'; b <= 'f'; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
