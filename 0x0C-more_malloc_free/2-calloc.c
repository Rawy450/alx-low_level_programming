#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  * *_memset - fills memory
  * @s: input1
  * @b: input2
  * @n: input3
  * Return: s
  */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*s++ = b;
	return (ptr);
}

/**
  * *_calloc -  function that allocates memory
  * @nmemb: array
  * @size: size of each element
  * Return: pointer
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (size == 0 || nmemb == 0)
		return (NULL);
	_memset(m, 0, sizeof(int) * nmemb);
	return (m);
}
