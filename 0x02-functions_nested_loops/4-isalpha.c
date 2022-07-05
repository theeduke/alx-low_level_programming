#include"main.h"

/**
 * _isalpha - Check main
 *
 * @c:An input character
 *
 * Return: 1 or 0 otherwise
 */
int _isalpha(int c)
{
	char a, b;
	int upper = 0;

	for (a = 'a'; a = 'z'; a++)
	{
		for (b = 'A'; b <= 'Z'; b++)
		{
			if (c == a || c == b)
				upper = 1;
		}
	}
	return (upper);
}

