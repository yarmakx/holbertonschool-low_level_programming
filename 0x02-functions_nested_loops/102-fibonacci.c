#include <stdio.h>

/**
  * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
  * Return: 0
  */
int main(void)
{
	unsigned int f1, f2, temp, i;

	f2 = 1;
	temp = 0;
	f1 = 0;
	while (i < 50)
	{
		temp = f2;
		f2 = f1 + f2;
		f1 = temp;
		printf("%d, ", f2);
		i++;
	}
	printf("\n");
}
