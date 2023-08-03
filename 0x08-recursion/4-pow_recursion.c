#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 *  _pow_recursion - this function that return the val ofx
 *
 *  @x: value of x
 *
 *  @y: value of y
 *
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
	return (-1);
	}
	else
	{
	return pow(x, y);
	}
}
