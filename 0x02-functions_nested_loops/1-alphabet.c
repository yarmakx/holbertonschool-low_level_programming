#include "holberton.h"
void print_alphabet(void);
/**
  * print_alphabet - prints the alphabet, in lowercase
  * Return: 0
  */
void print_alphabet(void)
{	char l;

	for (l = 'a'; l <= 'z'; l++)
		_putchar(l);
	_putchar('\n');
}
