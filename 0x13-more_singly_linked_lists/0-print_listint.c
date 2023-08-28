#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* print_listint - print the all the element
* @h: node
* Return: (COUNT);
*/

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%sn\", h->str);
		h = h->str;
		count++;
	}
	return (count);
}
