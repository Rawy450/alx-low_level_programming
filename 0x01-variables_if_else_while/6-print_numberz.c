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
	int digit = 0;

	while (digit <= 9)
	{		putchar(digit + '0');
	digit++;
	}
	putchar('\n');
	return (0);
}
