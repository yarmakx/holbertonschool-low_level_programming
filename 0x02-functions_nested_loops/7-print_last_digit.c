#include "holberton.h"

/**
  * print_last_digit - a function that prints the last digit of a number
  * @n: a number
  * Return: the value of the last digit
  */
int print_last_digit(int n)
{
	n = n % 10;
	if (n < 0)
	n = -n;
	_putchar(n + '0');
	return (n);
}
