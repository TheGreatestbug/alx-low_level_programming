#include "main.h"

/**
 * swap_int - A function that swaps values of int
 * @a: Parameter a
 * @b: Parameter b
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;

}
