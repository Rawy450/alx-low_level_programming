#include <stdio.h>
#include "function_pointers.h"
/**
  * int_index -  function that searches for an integer.
  * @array: input
  * @size: input2
  * @cmd: input
  * Return: always 0
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
	
	if (array && size && cmd)
		while (i < size)
		{
			if (cmd(array[i]))
				return (i);
			i++;
		}
	return (-1);
}
