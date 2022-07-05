#include "main.c"
/**
 * _islower - Entry point
 *
 *@c: An input character
 * Return: 0 (success)
 */
int _islower(int c)
{ 
       char number;
	int lower = 0;

	for (number = 'a'; number <= 'z'; number++)
	{
		if (number == c)
		{
			lower = 1;
		}
	}
	return (lower);
}
