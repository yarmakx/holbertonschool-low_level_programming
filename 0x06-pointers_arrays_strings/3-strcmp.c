#include "holberton.h"

/**
  * _strcmp - a function that compares two strings
  * @s1: string 1
  * @s2: string 2
  * Return: an integer less than, equal to, or greater than zero if s1 is found
  */
int _strcmp(char *s1, char *s2)
{
	int i, n;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] < s2[i])
		{
			n = s1[i] - s2[i];
		break;
		}
		else if (s1[i] > s2[i])
		{
			n = s1[i] - s2[i];
		break;
		}
		else if (s1[i] == s2[i])
		{
			n = 0;
		break;
		}
		i++;
	}
	return (n);
}
