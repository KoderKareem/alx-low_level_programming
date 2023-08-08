#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array of pointers to the command-line arguments
 * Description: Prints the name of the program using argc and argv
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *program_name;

	if (argc > 0)
	{
	program_name = argv[0];
	char *program_name_only = strrchr(program_name, '/');

	if (program_name_only)
		program_name_only++;
	else
		program_name_only = program_name;

	printf("%s\n", program_name_only);
	}

	return (0);
}
