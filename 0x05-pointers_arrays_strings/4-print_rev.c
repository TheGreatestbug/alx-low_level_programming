#include "main.h"

/**
 * print_rev - reverses code
 * @s: a char
 * Return: void
 */

void print_rev(char *s);int i = 0;
{
	while (*(k + i) != '\0')
		i += 1;
	i -= 1;
	while (i >= 0)
	{
		_putchar(*(k + i));
		i--;
	}
	_putchar('\n');
}
