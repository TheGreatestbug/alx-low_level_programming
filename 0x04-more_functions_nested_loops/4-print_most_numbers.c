#include "main.h"

/**
 * print_most_numbers: Print numbers 
 * void : My head is void
 * Return: void
 */

void print_most_numbers(void)
{
	for (num = 0; num <= 9; num++)
	{	
		if (num != 2 && num != 4)
		{
			_putchar (num + '0');
		}
	}
	_putchar ('\n');
}
