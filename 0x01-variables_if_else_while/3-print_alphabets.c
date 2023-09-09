#include <stdio.h>
/**
 * main = Prints the alphabet in lowercase, and then in uppercase, followed by a new line.
 * Return: (0)
 *
 */

int main(void)
{
	char Lower = 'a';
	char Upper = 'A';

	while (Lower <= 'z')
	{
		putchar(Lower);
		Lower++;
	}
	while (Upper <= 'Z')
	{
		putchar(Upper);
		Upper++;
	}
	putchar('\n');
	return(0);

}
