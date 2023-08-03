#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion_helper - this fuction will retlurn a sqrt
 *
 * @n: pointer to n
 * @start: pointer to start
 * @end: pointer to int
 */
int _sqrt_recursion(int n, int start, int end)
{
	if (start > end)
	{
	return -1;
	}

	int mid = (start + end) / 2;
	int square = mid * mid;

	if (square == n)
	{
		return mid;
	}
	else if (square < n)
	{
		return _sqrt_recursion_helper(n, mid + 1, end);
	}
	else
	{
		return _sqrt_recursion_helper(n, start, mid - 1);
	}

}
