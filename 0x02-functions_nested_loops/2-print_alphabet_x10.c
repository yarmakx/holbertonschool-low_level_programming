#include "holberton.h"
void print_alphabet_x10(void);

/**
  * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
  * Return: 0
  */
void print_alphabet_x10(void)
{
	char l;
	int n;

	for (n = 0; n < 10; n++)
	{
		for (l = 'a'; l <= 'z'; l++)
			_putchar(l);
			_putchar('\n');
	}
}
