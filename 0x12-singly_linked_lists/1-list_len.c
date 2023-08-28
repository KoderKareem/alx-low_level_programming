#include <stdio.h>
#include "lists.h"
/**
* list_len - print the element of the list
* @h: return poiter to h
* Return: (COUNT);
*/

size_t list_len(const list_t *h)
{
	size_t count;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
