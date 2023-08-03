#include <stdio.h>
#include "main.h"

/**
 * factorial - this func will print a fact number
 *
 * @n: this is pointer to char
 *
 * Return Always 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return n * factorial(n - 1);
	}
}
