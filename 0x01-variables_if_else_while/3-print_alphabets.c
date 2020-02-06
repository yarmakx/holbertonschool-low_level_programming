#include <stdio.h>

/**
  * main - prints the alphabet in lowercase, and then in uppercase
  * Return: 0
  */
int main(void)
{
	char lc_letter, uc_letter;

	for (lc_letter = 'a'; lc_letter <= 'z'; lc_letter++)
		putchar(lc_letter);
	for (uc_letter = 'A'; uc_letter <= 'Z'; uc_letter++)
		putchar(uc_letter);
	putchar("\n");
	return (0);
}
