#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  * *array_range -  function that creates an array of integers
  * @min: input
  * @max: input
  * Return : array range
  */
int *array_range(int min, int max)
{
	int len, i;
	int *ptr;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	ptr = malloc(sizeof(int) * len);

	if (!ptr)
		return (NULL);
	for (i = 0; i < len; i++)
		ptr[i] = min++;
	return (ptr);
}

