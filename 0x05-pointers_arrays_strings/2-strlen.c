#include "main.h"
/**
* _strlen - Write a function that returns the length of a string
* @s: char th check the lenght tht string
* Return: 0
*/

int _strlen(char *s)
{
	int a = 0; /* start teh counter from 0 */

	for (; *s++;)
		a++;
	return (a);
}
