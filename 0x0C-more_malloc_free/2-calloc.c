#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array and initializes it to zero.
 * @nmemb: The number of elements in the array.
 * @size: The size of each element in bytes.
 *
 * Return: A pointer to the allocated and initialized memory,
 *         or NULL if nmemb or size is 0, or if memory allocation fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
    if (nmemb == 0 || size == 0)
        return NULL;

    void *ptr = malloc(nmemb * size);
    if (ptr == NULL)
        return NULL;

    // Clear the allocated memory (set it to zero)
    unsigned int total_size = nmemb * size;
    for (unsigned int i = 0; i < total_size; i++)
        *((char *)ptr + i) = 0;

    return ptr;
}
