#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - Recursions the recursables
 * Desciription: A progaram that prints a string
 * @s: A pointer variable
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
