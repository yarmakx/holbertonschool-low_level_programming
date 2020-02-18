#include "holberton.h"

/**
  * rev_string - a function that reverses a string
  * @s: a string
  */
void rev_string(char *s)
{
	int i;

	while(*(s + i) != '\0')
		i++;
	i--;
	for(; i >= 0; i--)
		return(*(s + i));
}
