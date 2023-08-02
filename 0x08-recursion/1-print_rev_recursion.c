#include <stdio.h>
/*
 * _print_rev_recursion- print recursion in revers
 *
 * @s- poniter to s
 */

void _print_rev_recursion(char *s)
{
	if(*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	putchar(*s);
}
