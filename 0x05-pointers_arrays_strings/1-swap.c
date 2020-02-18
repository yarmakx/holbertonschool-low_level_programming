#include "holberton.h"

/**
  * swap_int - a function that swaps the values of two integers
  * @a: first integer
  * @b: second integer
  */
void swap_int(int *a, int *b)
{
	int temp = 0;

	temp = *a;
	*a = *b;
	*b = temp;
}
