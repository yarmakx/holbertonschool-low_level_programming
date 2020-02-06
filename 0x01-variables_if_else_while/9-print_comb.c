 #include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
		putchar(44);
		putchar(32);
	}
	putchar('\n');
	return (0);
}
