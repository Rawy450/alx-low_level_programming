#include<stdio.h>
/**
  * main - entrt point
  * @argc: input
  * @argv: input
  * Return: 0 success
  */
int main(int argc, char *argv[])
{
	int i;

	if (argc == 3)
	{
		i = atoi(argv[1]) * atoi(argv[2]);
	printf("%d \n", i);
	}
	else
	{
		printf("Error\n");
	return (1);
	}
}
