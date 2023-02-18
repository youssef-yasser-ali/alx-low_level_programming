#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	char c = '0';

	while (c < ('9' + 1))
	{
		putchar(c);
		if (c == '9')
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
