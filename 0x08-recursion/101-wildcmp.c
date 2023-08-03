#include <stdio.h>
#include "main.h"

/**
 * wildcmo - this func will compare two strings
 * @s1: this is a char
 * @s2: pointer to cahr
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return 1;
	}

	 if (*s2 == '*' || (*s1 != '\0' && *s1 == *s2))
	 {
	 return wildcmp(s1 + 1, s2 + 1);
	 }

	 if (*s2 == '*')
	 {
	  return wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1);
	 }
	 return 0;
}
