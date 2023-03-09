#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - Prints in reverse
 * Description: A program that prints a string in reverse
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar('\n');
	}
}
