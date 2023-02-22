#include "main.h"

/**
* _islower - returns 1 if c is lower
*
* @c: carcter to be checked if lower
*
* Return: 1 if lower, 0 ohterwiese
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);

}


