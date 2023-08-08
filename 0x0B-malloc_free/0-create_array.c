#include "main.h"
/**
* @create_array: this is the name of the function
* @c:
*
*
*/
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
	return NULL;
	}

	char *array = (char *)malloc(size * sizeof(char));
	
	if (array == NULL)
	{
	return NULL; // Failed to allocate memory
	}

	for (unsigned int i = 0; i < size; i++)
	{
	array[i] = c;
	}

	return array;
}
