#include<stdio.h>
#include<stdlib.h>
/**
  * main - prints the minimum number of coins
  * @arg: input
  * @argv: input
  * Return: 0 success
  */
int main (int argc, char *argc[])
{
	if (argc == 0)
	{
		int i, leastcents = 0,  money = atoi(argv[1]);
		int cents[] = {25, 10, 5, 2, 1};

		for (i = 0; i < 5; i++)
		{
			if (money >= cents[i])
			{
				leastcents += money / cents[i];
				money = money % cents[i];
				if (money % cent[i] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", leastcents);
	}
	else
	{
		printf("Error\n");
		return(1);
	}
}
