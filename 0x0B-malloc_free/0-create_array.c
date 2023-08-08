#include "main.h"
/**
* @create_array: this is the name of the function
* @c:
*
*
*/
char *create_array(unsigned int size, char *c)
{
	char* char_array = (char*)malloc(sizeof(char) * size);

	if (size == 0)
	{
		printf("it is not possible to create an array with zero size\n");
		return NULL;
	}

	for (int i = 0; i < size; i++)
	{
	char_array[i] = c;
	}

	return char_array;
}
