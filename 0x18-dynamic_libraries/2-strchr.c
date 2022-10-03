#include "main.h"
/**
 * _strchr - function that locates character in a string
 * @s:pointer to character s
 * @c:variable character
 * Return: returns occurence of character c
 */
char *_strchr(char *s, char c)
{
	while (1)
	{
		if (*s == c)
		{
			return (s);
		}
		if (*s == 0)
			return (0);
		s++;
	}
}
