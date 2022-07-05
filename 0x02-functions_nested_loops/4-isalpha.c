#include "main.c"
/**
 * _isalpha - Entry point
 *
 * @c:An input character
 *
 * Return: 1-if its is lower or uppercase
 */
int _isalpha(int c)
{
	char a, b;
	int upper = 0;

	for (a = 'a'; a = 'z'; a++)
	{
		for (b = 'A'; b <= 'Z'; b++)
		{
			if (a == 'c' && a == 'C')
			{
				upper = 1;
			}
		}
	}
	return (upper);
}

