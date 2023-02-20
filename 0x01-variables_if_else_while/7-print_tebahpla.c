#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program that prints letters of the alphabet backwards
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char z = 'z';

	while ( z >= 'a')
	{
		putchar(z);
		z--;
	}
	putchar("\n");
	return (0);
}

