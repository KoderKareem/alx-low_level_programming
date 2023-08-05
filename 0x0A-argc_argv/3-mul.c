#include <stdio.h>
#include <stdlib.h>
/*
 * main: This program wiil multiplies two numbers.
 * 
 * @argc: Argument count
 * @argv: Argument arrasy
 */
int main(int argc, char *argv[])
{
	if(argc != 3)
	{
		printf("Error\n");

		return 1;
	}

	// Convert the argument to integers
	
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);

	//perform the multiplication

	int result = num1 * num2;

	//print the result
	printf("%d", result);

	return 0;
}
