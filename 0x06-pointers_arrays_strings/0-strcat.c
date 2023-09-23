#include "main.h"

/**
  *_strcat - main function of the prototype
  *
  * @src: Concatenation parameter
  *
  * @dest: Concatenation parameter
  *
  * Return: dest
  */

char *_strcat(char *dest, char *src)
{
int b, c;

b = 0;
c = 0;

while (dest[b] != '\0')
{
	b++;
}

while (src[c] != '\0')
{
	dest[b] = src[c];
	b++;
	c++;
}
dest[b] = '\0';
return (dest);
}
