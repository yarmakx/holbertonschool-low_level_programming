#include "holberton.h"
int _isalpha(int c);

/**
  * _isalpha -  a function that checks for alphabetic character
  * @c: is a letter, lowercase or uppercase
  * Return: 1
  */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}

