#include "main.h"
#include <string.h>

/**
 * _memset - Entry point
 * Description: A program that fills memory with a constant byte
 * @s: variable
 * @n another var
 * @b: a var
 * Return: void
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}

	return (s);
}
