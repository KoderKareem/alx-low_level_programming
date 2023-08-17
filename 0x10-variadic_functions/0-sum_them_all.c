#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - This program will sum all the number it recv
 *
 * defination - this variadic program will sum all numbers
 *
 * @n: n as the first parameter, which represents the no of arg
 * Return - (total)g
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
	{
		return (0);
	}

	va_list args;

	va_start(args, n);

	int total = 0;

	for (unsigned int i = 0; i < n; i++)
	{
		total += va_arg(args, int);
	}

	va_end(args);
	return (total);
}

