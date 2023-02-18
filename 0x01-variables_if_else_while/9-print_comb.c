#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar(c + 48);
		if (c == 9)
		{
			c++;
			continue;
		}
		c++;

		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
