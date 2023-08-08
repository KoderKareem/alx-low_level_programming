#include <stdio.h>

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array of strings representing the arguments
 * Description: Prints the number of arguments passed
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int count = 0;

	for (int i = 1; i < argc; i++)
	{
		count++;
	}

	printf("%d\n", count);

	return (0);
}
