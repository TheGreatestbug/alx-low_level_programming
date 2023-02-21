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
	char dec;
	char hex;

	for (dec = 0; dec <= 9; dec++)
	{
		putchar(dec);
	}
	for (hex = 'a'; hex <= 'f'; hex++)
	{
		putchar(hex);
	}		
	putchar('\n');
	return (0);
}
