#include "main.h"

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	char alpha[] = "_putchar";

	int c;

	for(c = 0; c < 8; c++)
	{
		_putchar(alpha[c]);
	}

	_putchar('\n');

	return (0);
}
