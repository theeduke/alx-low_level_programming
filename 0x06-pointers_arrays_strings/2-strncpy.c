#include "main.h"
/**
 * _strncpy - a function that copys the strings to n character
 * @dest: an input string
 * @scr: an input string
 * @n : an input integer
 * Return: A pointer to the restlting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int scrlen = 0, i = 0;
	char *temp = dest, *start = src;

	while (*src)
	{
		srclen++;
		src++;
	}
	srclen++;

	if (n > srclen)
		n = srclen;

	src = start;

	for (; i < n; i++;)
		*dest++ = *src++;
	return (temp);
}
