#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int void print_alphabet(void)
{
	char str[] = "alphabet";
	int ch;

	for (ch = 0; ch < 8; ch++)
		_putchar(str[ch]);
	_putchar("\n");
	return (0);
}
