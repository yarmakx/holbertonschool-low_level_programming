#include "holberton.h"

/**
  * puts2 - a function that prints every other character of a string
  * @str: a string
  */
void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
