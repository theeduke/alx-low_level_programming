#include <stdio.h>
/**
 * main -  Entry poing
 * @argc: argument count
 * @argv: argument value
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	if (argv[0])
		printf("%d\n", argc - 1);
	return (0);
}
