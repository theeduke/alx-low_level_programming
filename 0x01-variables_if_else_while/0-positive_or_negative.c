#include <stdlib.h>

#include <time.h>

/* more headers goes there */
#include <stdio.h>


/**
 * main - this is the main entry
 *
 * Return:0 (success)
 */

int main(void)

{

	int n = 5;



	srand(time(0));

	n = rand() - RAND_MAX / 2;

	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	} else if (n == 0)
	{
		printf("%d is zero\n", n);
	} else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);

}
