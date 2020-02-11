#include "holberton.h"
#include <stdio.h>

/**
  * print_to_98 -  a function that prints all natural numbers from n to 98
  * @n: natural number
  */
void print_to_98(int n)
{	int m,k;

	for (n = n; n <= 98; n++)
	{
	if (n >= 0)
	{
		m = n / 10;
		k = n % 10;
		if (m != 9 || k != 9)
		{	
			if (m > 0)
			{
				_putchar(m + '0');
				_putchar(k + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(k + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	}
	_putchar('\n');
}
