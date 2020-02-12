#include "holberton.h"

/*
 * print_times_table - a function that prints the n times table,starting with 0
 */
void print_times_table(int n)
{
	int a, b, c;
	
	if (n > 0 && n <= 15)
	{
		for (a = 0; a < n; a++)
		{
			c = a * b;
			for (b = 0; b < n; b++)
			{
				if (c / 10 > 0)
				{
					_putchar(c / 10 + '0');
					_putchar(c % 10 + '0');
					if (b < n-1)
					{
						_putchar(',');
						_putchar(' ');
					}
				}
				else if (b == 0)
				{
					_putchar('0');
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					_putchar(' ');
					_putchar(c % 10 + '0');
					if (b < n)
					{
					_putchar(',');
					_putchar(' ');
					}
				}
			}
			_putchar('\n');
		}
	}
}
