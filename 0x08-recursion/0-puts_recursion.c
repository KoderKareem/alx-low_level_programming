#include "main."
/*
* main - this program will print a string
*
* Return: 0;
*/
void _puts_recursion(char *s){
	if (*s)
{
	_puchar(*s);
	_puts_recursion(s + 1);
}
else {
	_putchar('\n');
}
}
