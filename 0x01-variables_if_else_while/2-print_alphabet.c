#include <stdio.h>
/**
 * main - entry point
 *
 * Description: print all aplhabet lstters
 *
 * Return: always 0 (success)
*/

int main(void)
{
	char ch = 'a';

	while (ch < 'Z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
