#include "holberton.h"
#include <stdio.h>

/**
  * rev_string - a function that reverses a string
  * @s: a string
  */
void rev_string(char *s)
{
	int i, j, temp;

	while (*(s + i) != '\0')
		i++;
	i--;
	j = 0;
	while (i > j)
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
		i--;
		j++;
	}
}
