nclude"main.h"
/**
  * print _ alphabet - utilizes on the _putchar funtion to print alphaber a - z
  */

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
