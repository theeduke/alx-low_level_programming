#include "main.c"
/*
 * _islower - Entry point
 *
 * Return: 0 (success)
 */
int _islower(int c)
{
	char a;
	int b = 0;
	
	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == c)
		       b = 1;
	}
	return (b);
}
