#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int c = 'z';

	while (c > 'a')
	{
		putchar(c);
		c--;
	}

	putchar('\n');

	return (0);
}
