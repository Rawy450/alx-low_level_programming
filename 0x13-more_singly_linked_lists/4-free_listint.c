#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
  * free_listint -  a function that frees
  * @head: input
  * Return: void
  */
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head != NULL)
	{
		node = head->next;
		free(head);
		head = node;
	}
}
