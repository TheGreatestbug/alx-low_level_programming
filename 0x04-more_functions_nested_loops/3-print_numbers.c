#include "main.h"

/**
 * print_numbers - Print function
 * Description: A program that prints numbers from 0 to 9
 * Return: Always 0
 */

void print_numbers(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		_putchar (num + '0');
	}
	_putchar ('\n');

}
