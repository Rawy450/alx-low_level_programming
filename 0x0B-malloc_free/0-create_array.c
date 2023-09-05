#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * create_array - function that creates an array of chars
  * @size: input
  * @c: input2
  * Return: pointer or 0 success
  */
char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (size == 0 || n == 0)
		return (0);
	while (size--)
		n[size] = c;
	return(n);
}
