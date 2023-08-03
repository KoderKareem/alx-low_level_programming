#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strlen_recursion - this function will return the lenght of string
 *
 * @s: pointer to char
 */

int _strlen_recursion(char *s)
{
	if (*s != '\n')
	{
		return strlen(s);
	}
}
