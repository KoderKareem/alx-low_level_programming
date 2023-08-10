#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Duplicates a string in memory.
 * @str: The string to be duplicated.
 *
 * Return: A pointer to the newly allocated duplicated string,
 *         or NULL if str is NULL or if memory allocation fails.
 */
char *_strdup(char *str)
{
    if (str == NULL)
        return NULL;

    char *dup_str;
    int length = 0;
    int i;

    /* Calculate the length of the input string */
    while (str[length] != '\0')
        length++;

    /* Allocate memory for the duplicated string (+1 for the null-terminator) */
    dup_str = (char *)malloc((length + 1) * sizeof(char));

    if (dup_str == NULL)
        return NULL;

    /* Copy the content of the input string to the duplicated string */
    for (i = 0; i <= length; i++)
        dup_str[i] = str[i];

    return dup_str;
}
