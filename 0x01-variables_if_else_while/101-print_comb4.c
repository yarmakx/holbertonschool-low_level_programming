#include <stdio.h>

/**
  * main - prints all possible differnt combinations of three digits
  * Return: 0
  */
int main(void)
{	int k, l, m;

	for (k = 0; k < 10; k++)
	{
	for (l = k + 1; l < 10; l++)
	{
	for (m = l + 1; m < 10; m++)
			{	putchar(k + '0');
				putchar(l + '0');
				putchar(m + '0');
				if (k != 7 || l != 8 || m != 9)
				{	putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
