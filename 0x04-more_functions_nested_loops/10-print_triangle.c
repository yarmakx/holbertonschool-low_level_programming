#include "holberton.h"

/**
  * print_triangle - a function that prints a triangle
  * @size:  the size of the triangle
  */
void print_triangle(int size)
{
	int i, j, s;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (s = 1; s < size - i; s++)
				_putchar(' ');
			for (j = 0; j <= i; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
