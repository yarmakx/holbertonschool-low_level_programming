#include <stdio.h>

/**
  * main - prints all possible combinations of two two-digit numbers
  * Return: 0
  */

int main(void)
{
int a, b, c, d;

for (a = 0; a <= 9; a++)
{
for (b = 0; b <= 9; b++)
{
for (c = 0; c <= 9; c++)
{
for (d = 0; d <= 9; d++)
{
if (a <= c && b < d)
{
putchar(a + '0');
putchar(b + '0');
putchar(' ');
putchar(c + '0');
putchar(d + '0');
if (a != 57 || b != 56 || c != 57 || d != 57)
{
putchar(',');
putchar(' ');
}
}
}
}
}
}
putchar('\n');
return (0);
}
