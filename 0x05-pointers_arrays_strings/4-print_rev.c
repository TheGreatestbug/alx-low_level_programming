#include "main.h"

/**
 * print_rev - reverses code
 * @k: a char
 * Return: void
 */

void print_rev(char *s)
{
	int length = strlen(s);
	char *end = s + length - 1;

	while (end >= s)
	{
		printf("%c", *end);
		end--;
	}
	printf("\n");
}
