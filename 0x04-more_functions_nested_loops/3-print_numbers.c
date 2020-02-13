#include "holberton.h"

/**
  * print_numbers - a function that prints the numbers, from 0 to 9
  */
void print_numbers(void)
{
	char c;
	
	c = 48;
	while (c <= 57)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
