#include<stdio.h>
/**
  * main - emty point
  * @argc: input
  * @argv: input
  * return: 0
  */
int main(int argc, char **argv)
{
	printf("%d \n", argc);
	printf("%s \n", argv[argc - 1]);
	printf("%s \n", argv[0]);
	return (0);
}

