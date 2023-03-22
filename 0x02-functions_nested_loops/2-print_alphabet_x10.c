include "main.h"

/**
* prints - 10 times the alphabet, in lowercase
*
*/
void print_alphabet_x10(void)
{
	char letter;
	char alphabet;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		for (alphabet = 0; alphabet <= 10; alphabet++)
		_putchar(letter);
		_putchat('\n');
	}
}
