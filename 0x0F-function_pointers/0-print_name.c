#include <stdio.h>
/**
 * print_name - this program will a name
 *
 * @name: char to name
 * @f: pointer to char
 *
 * description - this program will print name
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
