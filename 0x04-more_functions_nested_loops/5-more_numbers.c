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

	first_digit = num / 10;
	second_digit = num % 10;

	for (prt = 0; prt <= 9; prt++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num < 10)
			{
				_putchar (num);
			}
			else
			{
				_putchar (first_digit);
				_putchar (second_digit);
			}
		}
	}	
}
