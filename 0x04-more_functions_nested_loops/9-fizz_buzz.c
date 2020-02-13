#include <stdio.h>

/**
  * main - a program that prints the numbers from 1 to 100
  * Return: 0
  */
int main(void)
{
	int n;

	for (n = 1; n < 101; n++)
	{
		if (n % 3 == 0)
		{
			printf("Fizz");
			if (n % 5 == 0)
				printf("Buzz");
		}
		else if (n % 5 == 0)
			printf("Buzz");
		else
			printf("%d", n);
		if (n != 100)
		printf(" ");
	}
	printf("\n");
	return (0);
}
