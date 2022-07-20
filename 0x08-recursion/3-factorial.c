#incude "main.h"

/**
 * int factorial(int n)
 * @n: an integer input
 * Return : 0 (success)
 */
int factorial(int n)
{
	if (n < 0)
	{
		return -1
	}
	if (n == 0)
	{
		return 1
	}
	if (n == 1)
	{
		return 1
	}
	n * factorial(n - 1);
	return 0;
}
