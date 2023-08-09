#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * create_array - Creates an array of characters.
 * @size: The size of the array to create.
 * @c: The character to initialize the array with.
 *
 * Return: A pointer to the newly created array.
 */
char *create_array(unsigned int size, char c)
{
	char *array;

	if (size == 0)
	{
		return (NULL);
	}

	array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL); /* Failed to allocate memory */
	}

	{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	}

	return (array);
}
