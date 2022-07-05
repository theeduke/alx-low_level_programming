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
	char lowerCase, upperCase;
	int upper = 0;

	for (lowerCase = 'a'; lowerCase = 'z'; lowerCase++)
	{
		for (upperCase = 'A'; upperCase <= 'Z'; upperCase++)
		{
			if (c == lowerCase || c == upperCase)
				upper = 1;
		}
	}
	return (upper);
}

