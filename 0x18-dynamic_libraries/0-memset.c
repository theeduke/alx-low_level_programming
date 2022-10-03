#include "main.h"
/**
 * _memset - function that fills memory with constant byte
 * @s:variable character
 * @b:variable character
 * @n:variable integer
 * Return: returns poiter to a location filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *start = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (start);
}
