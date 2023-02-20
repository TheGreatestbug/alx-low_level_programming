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
	char z;

	for (z = 'z'; z >= 'a'; z--)
	{
		putchar(z);
	}
	putchar("\n");
	return (0);
}

