#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to the newly allocated concatenated string,
 *         or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	int s1_length = (s1 != NULL) ? strlen(s1) : 0;
	int s2_length = (s2 != NULL) ? strlen(s2) : 0;
	int size = s1_length + s2_length + 1;

	char *result = malloc(size * sizeof(char));

	if (result == NULL)
	return (NULL);

	int i;
	int j;

	for (i = 0; i < s1_length; i++)
	result[i] = s1[i];

	for (j = 0; j < s2_length; j++)
	result[i + j] = s2[j];

	result[i + j] = '\0';

	return (result);
}
