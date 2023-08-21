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
	{	_putchar(*str + 0);
	str++;
	}
	putchar('\n');
}

