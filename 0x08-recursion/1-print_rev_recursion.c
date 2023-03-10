#include "main.h"

/**
 * _print_rev_recursion - Prints in reverse
 * Description: A program that prints a string in reverse
 * @s: a variable in main
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
