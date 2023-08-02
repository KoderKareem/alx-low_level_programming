#include <stdio.h>
/**
 * _puts_recursion(char *s)- print recursion
 *
 * @S: this is a pointer to s
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');  /* Print a new line when the end of string is reached */
		return;
	}

	putchar(*s);  /* Print the current */

	_puts_recursion(s + 1);
}
