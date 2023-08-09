#include <stdio.h>
#include <stdlib.h>
#include "main.h"

char *create_array(unsigned int size, char c) {
    if (size == 0) {
        return NULL;
    }

    char *array = (char *)malloc(size * sizeof(char));
    if (array == NULL) {
        return NULL; // Failed to allocate memory
    }

    // Use memset to initialize the array with the given character
    memset(array, c, size);

    return array;
}
