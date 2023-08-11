#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings with a limit on the second string.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes from s2 to concatenate.
 *
 * Return: A pointer to the newly allocated concatenated string,
 *         or NULL if memory allocation fails or if n is greater than s2 length.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    unsigned int s1_length = strlen(s1);
    unsigned int s2_length = strlen(s2);

    if (n >= s2_length)
        n = s2_length;

    char *result = malloc(s1_length + n + 1);
    if (result == NULL)
        return NULL;

    strcpy(result, s1);
    strncat(result, s2, n);

    return result;
}
