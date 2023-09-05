#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * _strdup - function that returns a pointer
  * @str: string
  * Return: 0
  */
char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *m;
		if (str == 0)
			return (0);
	for (; str[size] != '\0'; size++)
		;

		m = malloc(size * str[size] + 1);
	if (m == 0)
		return (0);

	else
	{
		for (; i < size; i++)
			;
			m[i] = str[i];
	}
	return (m);
}
