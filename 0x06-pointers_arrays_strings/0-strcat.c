#include "holberton.h"

/**
  * _strcat - a function that concatenates two strings
  * @src: the string
  * @dest: the string
  * Return: a pointer to the resulting string dest
  */
char *_strcat(char *dest, char *src)
{
	int i, j, k, l;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
		j++;
	k = i;
	l = 0;
	while (k <= i + j)
	{
		dest[k] = src[l];
		k++;
		l++;
	}
	dest[k] = '\0';
	return (dest);
}
