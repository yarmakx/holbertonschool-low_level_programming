#include "holberton.h"

/**
  * puts_half - a function that prints half of a string
  * @str: a string
  */
void puts_half(char *str)
{
	int i, len;
	while (*(str + len) != '\0')
		len++;
	for (i = len/2; *(str + i) != '\0'; i++)
		_putchar(*(str + i));
	_putchar('\n');
}
