#include "holberton.h"
int _strlen(char *s);

/**
  * _strncat - a function that concatenates two strings
  * @dest: a string
  * @src: a string
  * @n: bytes from src
  * Return: a pointer to the resulting string dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len;
	int i;

	dest_len = _strlen(dest);
	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
}

/**
  * _strlen - string length
  * @s: a string
  * Return: lenght
  */
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;
	return (len);
}
