#include <stdio.h>

/**
* main - this program will print all args pass to it.
* @argc:argument count
* @argv:argument vetctor
*
* Return: (0);
*/

int main(int agrc, char *argv[])
{
	int i;
	for (i = 0; i < agrc; i++)
	{
	printf("%s\n", argv[i]);
	}
	
	return (0);
}
