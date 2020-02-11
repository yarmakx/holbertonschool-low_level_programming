#include "holberton.h"
#include <stdio.h>

/**
  * print_to_98 -  a function that prints all natural numbers from n to 98
  * @n: natural number
  */
void print_to_98(int n)
{
	for (n = n; n <= 97; n++)
	{
		if (n != 98)
			printf("%d, ", n);
		else
			printf("%d", n);
	}
	for (n = n; n > 97; n--)
	{
		if (n != 98)
			printf("%d, ", n);
		else
			printf("%d", n);
	}
	printf("\n");
}
