#include<stdio.h>

/**
  * main- prints the number of arguments
  * @argc: input
  *@argv: input 2
  * Return:0 success
  */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
