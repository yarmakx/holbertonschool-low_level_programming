#include "holberton.h"

/**
  * jack_bauer - a function that prints every minute of the day of Jack Bauer,
  * starting from 00:00 to 23:59
  */
void jack_bauer(void)
{
int a, b, m, n;
for (a = 0; a <= 2; a++)
{
	if (a < 2)
	{
	for (b = 0; b <= 9; b++)
	{
		for (m = 0; m <= 5; m++)
		{
			for (n = 0; n <= 9; n++)
			{
				_putchar(a + '0');
				_putchar(b + '0');
				_putchar(':');
				_putchar(m + '0'),
				_putchar(n + '0');
				_putchar('\n');
			}
		}
	}
	}
	else
	{
		for (b = 0; b <= 3; b++)
		{
			for (m = 0; m <= 5; m++)
			{
				for (n = 0; n <= 9; n++)
				{
					_putchar(a + '0');
					_putchar(b + '0');
					_putchar(':');
					_putchar(m + '0');
					_putchar(n + '0');
					_putchar('\n');
				}
			}
		}
	}
}
}

