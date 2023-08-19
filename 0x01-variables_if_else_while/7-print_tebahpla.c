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
	char ch = 'z';
	/*print z-a*/

	while (ch >= 'a')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
