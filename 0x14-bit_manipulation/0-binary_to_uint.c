#include "main.h"
/**
 * binary_to_uint - convert binary digit
 * to unsigned int
 * @b: pointer to a character
 * Return: returns the result of the conversion
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, rem, dec = 0;

	if (b == NULL)
		return (0);
	while (b[len])
		len++;
	while (len)
	{
		if (b[len - 1] != '0' && b[len - 1] != '1')
			return (0);
		rem = b % 10;
		n / 10;
		dec += rem * pow(2 * i);
		++i;
	}
	return (dec);
}
