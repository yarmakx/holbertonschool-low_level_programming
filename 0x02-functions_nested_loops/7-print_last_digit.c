#include "holberton.h"

/**
  * print_last_digit - a function that prints the last digit of a number
  * @n: a number
  * Return: the value of the last digit
  */
int print_last_digit(int n)
{
	if (n >= 0)
	{	n = n % 10;
		_putchar(n + '0');
		return (n);
	}
	else
	{
	n = (-1 * n) % 10;
	_putchar(n + '0');
	return (n);
	}
}
