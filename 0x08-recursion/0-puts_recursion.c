#include "main.h"

/**
 * _puts_recursion - Recursions the recursables
 * Desciription: A progaram that prints a string
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')	
		Printf (%c, *s);
	_puts_recursion (*s + 1);
}
