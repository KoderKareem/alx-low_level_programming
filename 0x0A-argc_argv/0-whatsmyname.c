#include "main.h"

/**
 * main - this program will print its name
 * @argc: argument count
 * @argv: argument vector
 * Return: Always success
 */

int main(int argc, char *argv[])
{
	for(int i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
