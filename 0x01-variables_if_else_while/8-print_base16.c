#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A pr that prints out xidecimal numbers
 *
 * Return: Always 0  (Success)
 */
int main(void)
{
	char hex;

	for (hex = 0; hex <= 9; hex++)
	{
		putchar('0' + hex);
	}
	for (hex = 'a'; hex <= 'f'; hex++)
	{
		putchar(hex);
	}
	putchar('\n');
	return (0);
}
