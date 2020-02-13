#include "holberton.h"

/**
  * print_most_numbers - a function that prints the numbers, from 0 to 9
  */
void print_most_numbers(void)
{
	int c;

	c = 0;
	while (c <= 9)
	{
		_putchar(c + '0');
		c++;
		if (c == 2 || c == 4)
		c++;
	}
	_putchar('\n');
}
