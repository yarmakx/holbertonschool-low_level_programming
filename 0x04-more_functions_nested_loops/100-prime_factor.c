#include <stdio.h>

/**
  * main - a program that finds and prints the largest prime factor
  * Return: 0
  */
int main(void)
{
	int pf, i;
	long int n;

	n = 612852475143;
	for (i = 2; n > 1; i++)
	while (n % i == 0)
	{
		pf = i;
		n = n / i;
	}
	printf("%d\n", pf);
	return (0);
}
