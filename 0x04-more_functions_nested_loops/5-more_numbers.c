#include "holberton.h"

/**
  * more_numbers - a function that prints 10 times the numbers, from 0 to 14
  */
void more_numbers(void)
{
	int c, i;

	for (i = 0; i < 10; i++)
	{
		for (c = 0; c < 15; c++)
		{
			if (c > 9)
				_putchar(c / 10 + '0');
			_putchar(c % 10 + '0');
		}
		_putchar('\n');
	}
}