#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int n, m;

	for (n = '0'; n <= '0' + 8; n++)
	{

		for (m = '1'; m <= '1' + 8; m++)
		{
			if(m>n)
			{
				putchar(n);
				putchar(m);
				if (n == '8' && m == '9')
					continue;

				putchar(',');
			}	putchar(' ');
		}
	}

	putchar('\n');
	return (0);

}


