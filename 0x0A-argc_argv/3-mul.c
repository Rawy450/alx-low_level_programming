#include<stdio.h>
#include <stdlib.h>
/**
  * main - entrt point
  * @argc: input
  * @argv: input
  * Return: 0 success
  */
int main(int argc, char *argv[])
{
	int sum;
	int atoi;

	if (argc !=  3)
	{
		printf("Error\n");
	return (1);
	}
	else
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	return (0);
	}
}
