#include "main.h"
/*
* main - this program will print a string
*
* Return: 0;
*/
void _puts_recursion(char *s)
{
if (*s)
{
	_putchar(*s);
	_puts_recursion(s + 1);
}
else
{
	_putchar('\n');
}

}