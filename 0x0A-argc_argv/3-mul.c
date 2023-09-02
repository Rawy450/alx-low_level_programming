#include<stdio.h>
/**
  * main - entrt point
  * @argc: input
  * @argv: input
  * Return: 0 success
  */
int main(int argc, char *argv[])
{
	int sum;

	if (argc !=  2)
	{
		printf("Error");
	return (1);
	}
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
		return (0);
	}
}
