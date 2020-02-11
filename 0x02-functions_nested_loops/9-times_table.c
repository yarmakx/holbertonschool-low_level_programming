#include "holberton.h"

/**
  * times_table - a function that prints the 9 times table, starting with 0
  */
void times_table(void)
{
	int m, n, l, x, y;

	for (m = 0; m < 10; m++)
	{
		for (n = 0; n < 10; n++)
		{
			l = m * n;
			x = l / 10;
			y = l % 10;
			if (x > 0)
			{
			_putchar(x + '0');
			_putchar(y + '0');
			if (n < 9)
				{
				_putchar(',');
				_putchar(' ');
				}
			}
			else
			{
			_putchar(' ');
			_putchar(y + '0');
			if (n < 9)
				{
				_putchar(',');
				_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
