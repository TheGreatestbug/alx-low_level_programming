#include <stdio.h>
/**
 * main - Entry point
 * Desription: A program that does stuff I have no idea about
 * Return: Always 0;
 */

int main(void)
{
	int num;

	for (num = 0; num <= 10; num++)
	{
		putchar((char)(num + 48));
		if (num == 9)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
		if (num == 9)
		{
			continue;
		}
	}
	putchar('\n');
	return (0);
}
