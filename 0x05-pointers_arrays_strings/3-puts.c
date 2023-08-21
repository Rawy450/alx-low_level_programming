#include "main.h"
/**
  * _puts - prints a string
  *
  * @str: input
  *
  * Return: nothing
  */

void _puts(char *str)
{
	while (*str != '\0')
	{	_puthar(*str + 0);
	str++;
	}
	putchar('\n');
}

