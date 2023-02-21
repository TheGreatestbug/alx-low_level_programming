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
	int rev = 'z';

	while (rev >= 'a')
	{
		putchar(rev);
		rev--;
	}
	putchar("\n");
	return (0);
}

