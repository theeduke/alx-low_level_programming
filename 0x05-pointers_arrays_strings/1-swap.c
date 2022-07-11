#include "main.h"
/**
 *swap_int - swap the numbers
 *@a:input character
 *@b:input character
 */
void swap_int(int *a, int *b)
{
	int a;
	int b;

	int a = 98;
	int b = 42;
	printf("a = %d, b = %d\n", a, b);
	swap_int(&a, &b);
	printf("a = %d, b = %d\n", a, b);
}
