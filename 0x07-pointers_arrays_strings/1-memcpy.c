#include"main.h"
#include<stdio.h>
/**
  * _memcpy - function that fills memory with a constant byte
  * @dest: memory area
  * @src: sources
  * @n: length os src
  * Return: a pointer of dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int itr;

	for (itr = 0; itr <  n; itr++)
	{
		dest[itr] = src[itr];
	}
	return (dest);
}
