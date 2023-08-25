#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
* print_list - that prints the elements of this linked
*
* @h: the valu that hold the data
* description - this program will print all what it recicive
* Return: (COUNT);
*/
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		h = h->next;
		count++;

	}

	return (count);
}
