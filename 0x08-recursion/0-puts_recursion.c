#include "main.h"

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
		Printf("%c\n", *s);
	}
	_puts_recursion(*s + 1);
}