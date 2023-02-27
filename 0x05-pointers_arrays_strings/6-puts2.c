#include "main.h"

/**
 * puts2 - function that prints every other character
 *
 * @str: pointer to char
 * Return: nothing
 */

void puts2(char *str)
{
	int length = strlen(str);
	char *end = str + length;

	while (str < end)
	{
		printf("%c", *str);
		str = str + 2;
	}

	printf("\n");
}
