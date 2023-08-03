#include <stdio.h>
#include <string.h>

/**
 * is_palindrome - this is a func that will
 *
 * @s: this is a pointer to s
 */

int is_palindrome(char *s)
{
	int length = strlen(s)l
		int i, j;
	for (i = 0; j = length - 1; i < j; i++; j--)
	{
		if (s[i] != s[j])
		{
			return (0);
		}
	}
	return (1);
}
