#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
  * list_len - determain the  linked list
  * @h: pointer of file
  *
  * Return: size of list
  */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
