#include "main.h"

/**
 * print_numbers - Print function
 * Description: A program that prints numbers from 0 to 9
 * Return: Void
 */

void print_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		_putchar (num + '0');
	}
	_putchar ('\n');
}
