 #include <stdio.h>

 /**
   * main - prints the alphabet in lowercase
   * Return: 0
   */
int main(void)
{
	char letter;

	letter = 'a';
	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
		if (letter == 'e' || letter == 'q')
			letter++;
	}
        putchar('\n');
        return (0);
}
