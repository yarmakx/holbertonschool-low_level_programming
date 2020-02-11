#include "holberton.h"
int _abs(int);

/**
  * _abs - a function that computes the absolute value of an integer
  *@a: the absolute value of an integer
  *Return: a
  */
int _abs(int a)
{
	if (a >= 0)
		return (a);
	else
		return (-a);
}
