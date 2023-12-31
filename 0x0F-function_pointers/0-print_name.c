#include <stdio.h>
#include "function_pointers.h"
/**
  * print_name -  function that prints a name
  * @f: input
  * @name: input
  * Return: always 0
  */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
