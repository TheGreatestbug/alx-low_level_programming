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
	char rev;

	for (rev = 'z'; rev >= 'a'; rev--)
	{
		putchar(rev);
	}
	putchar('\n');
	return (0);
}

