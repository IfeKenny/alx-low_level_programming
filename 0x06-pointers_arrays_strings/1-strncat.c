#include "main.h"

/**
  * _strncat  - the main function
  *
  * @n: Function parameter
  *
  * @src: Function parameter
  *
  * @dest: Function parammeter
  *
  * Return: dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int b, c;

	b = 0;
	c = 0;

	while (dest[b] != '\0')
	{
	b++;
	}
	while (c < n && src[c] != '\0')
	{
	dest[b] = src[c];
	b++;
	c++;
	}
	dest[b] = '\0';
	return (dest);
}
