#include <stdio.h>

/**
  * main - prints the alphabet in lowercase
  * Return: 0
  */
int main(void)
{
	char letter;

	letter = 'z';
	while (letter >= 'a')
	{	putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}
