#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
  * print_listint - a function that prints
  * @h: input
  * Return: size
  */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
	h = h->next;
	i++;
	}
	return (i);
}
