#include "main.h"

/**
 * factorial - multiplies by !
 * @n: variable
 * Return: void
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
