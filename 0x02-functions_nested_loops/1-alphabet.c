#include "main.h"

/**
 * prints the alphabet - utilizes on the _putchar function to prints the alphabet a - z
 *
 * Return: Always 0.
 */
int void print_alphabet(void)
{

	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(str[ch]);
	_putchar("\n");
	return (0);
}
