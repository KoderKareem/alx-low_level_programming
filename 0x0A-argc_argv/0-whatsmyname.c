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
	if (argc >= 0)
	{
		char *program_name = argv[0];

		printf("%s\n", program_name);
	}
	return (0);
}
