#include "main.h"

/**
 * more_numbers: prints numbers
 *
 * Return: void
 */

void more_numbers(void)
{
	int prt;
	int num;
	int first_digit;
	int second_digit;

	for (prt = 0; prt <= 9; prt++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num < 10)
			{
				second_digit = num;
			}
			else
			{
				first_digit = num / 10;
			 	second_digit = num % 10;
				_putchar (first_number + '0');
			}
			_putchar (second_digit	+ '0');
		}
		_putchar ('\n');
	}
}
