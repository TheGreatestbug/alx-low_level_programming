#include "main.h"

/**
 * _pow_recursion - Power recursion
 * Description: A function that raises x to the power y
 * @x: base variable
 * @y: power variable
 * Return: void
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y != 0)
	{
		return (x * _pow_recursion(x, y - 1))
	}
}
