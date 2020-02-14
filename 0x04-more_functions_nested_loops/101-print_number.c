#include "holberton.h"

/**
  * print_number - a function that prints an integer
  * @n: integer
  */
void print_number(int n)
{
	if (n < 0)
		_putchar('-');
	if (n / 10)
		print_number(n / 10);
	_putchar(n % 10 + '0');
}
