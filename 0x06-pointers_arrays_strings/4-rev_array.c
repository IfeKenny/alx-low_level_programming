#include "main.h"

/**
  * reverse_array - The main faunction
  *
  * @a: Function parameter
  *
  * @n: Function parameter
  *
  * Return: Always 0
  */
void reverse_array(int *a, int n)
{
	int b, c;

	for (b = 0; b < n--; b++)
	{
	c = a[b];
	a[b] = a[n];
	a[n] = c;
	}
}
