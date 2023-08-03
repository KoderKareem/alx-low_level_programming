#include <stdio.h>
#include "main.h"
/*
* is_prime_helper - thi func will print a prime nu
* is_prime_number - this function will print a 
* @divisor: diviso
* @n: nponter:
*/

int is_prime_helper(int n, int divisor)
{
	if (divisor == 1)
	{
		return 1;  // Base case: n is divisible only by 1 (prime)
	}
	else
	{
		if (n % divisor == 0)
		{
			return 0;  // Base case: n is divisible by divisor (not prime)
        }
		else
		{
			return is_prime_helper(n, divisor - 1);  // Recursive call
		}
	}
}

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return 0;  // Negative numbers and 0 or 1 are not prime
	}
	else
	{
		return is_prime_helper(n, n - 1);  // Start recursion with n-1 as divisor
	}
}
