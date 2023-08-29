#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* listint_len - print the all the number of element
* @h: pointer to node
*
* Return: (COUNT);
*/

size_t listint_len(const listint_t *h)
{
	int count = 0;

	struct listint_s *ptr = h;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}

	return (count);
}