#include "holberton.h"
int print_sign(int n);

/**
  * print_sign - a function that prints the sign of a number
  * @n: number
  * Return: 1 and prints + if n is greater than zero
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}

}
