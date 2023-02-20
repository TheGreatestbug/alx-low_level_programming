#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program that prints base 10 numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar('0' + num);
	}
	putchar("\n");
	return (0);
}
