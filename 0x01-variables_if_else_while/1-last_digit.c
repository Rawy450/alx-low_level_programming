#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 *
 * Desscription: print the value

 * Return: 0 (success0)

*/

int main(void)

{
	int n; digit

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = n % 10;
	if (digit > 5)
		printf("last digit of %i is %i and is greater than 5\n", n, digit);
	else if (digit == 0)
		 printf("last digit of %i is %i and is 0\n", n, digit);
	else if
		(digit < 6 && digit != 0)
		 printf("last digit of %i is %i and is less than 6 not 0\n", n, digit);

	return (0);
}