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
	
	if (size == NULL)
	{
	return NULL;
	}

	return array;
}
