#include <stdio.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	srand(time(0));
	n = rand(0) - RAND_MAX / 2;
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n == 0)
		printf("%i is zero \n", n);
	else
		printf("%i is negatve\n", n);
	return (0);
}
