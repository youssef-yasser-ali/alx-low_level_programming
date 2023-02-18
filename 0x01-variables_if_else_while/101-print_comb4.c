#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int n, m, l;

	for (n = '0'; n <= '0' + 7; n++)
	{

		for (m = '1'; m <= '0' + 8; m++)
		{
			for (l = '2'; l <= '0' + 9; l++)
			{

				if (m > n && l > m)
				{
					putchar(n);
					putchar(m);
					putchar(l);

					if (n == '7' && m == '8' && l =='9')
						continue;

					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);

}


