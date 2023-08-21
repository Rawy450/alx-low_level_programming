#include "main.h"
#include <stdio.h>
/**
  * _strlen - function that returns the length of a string
  * @s: input
  * Return: lenght of string
  */
int _strlen(char *s)
{
	int n;

	for (n = 0; s != '\0'; s++)
		n++;
	return (n);
}
