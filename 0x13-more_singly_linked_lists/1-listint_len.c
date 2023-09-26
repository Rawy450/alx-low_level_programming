#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
  * listint_len -  function that returns the number of elements
  * @h: input
  * Return: length
  */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
	i++;
	}
	return (i);
}
