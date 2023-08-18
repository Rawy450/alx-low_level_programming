#include "main.h"
/**
  * print_numbers - print  from 0 to 9
  *	only use _putchar twice in your code
  *
  * Return: 0 (success)
*/

void print_numbers(void)
{
	int num = 0

	do {
		_putchar(num + 48);
		num++;
	} while (i >= 0 && i <= 9);
		_putchar('\n');
}
