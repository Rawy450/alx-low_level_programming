#include <stdio.h>
#include "function_pointers.h"
/**
  * array_iterator - function that executes a function
  * @array: input
  * @size: input2
  * @action: input
  * Return> always 0
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array + size -1;

	if (array && siz && action)
		while (array <= end)
			action(*array++);
}
