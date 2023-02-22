#include "main.h"

/**
* _isalpha - check if the alpha
*
* @c: character to be cecked if alpha
*
* Return: 1 if letter , 0 ohterwise
*/

int _isalpha(int c)
{
	if ((c <= 90) && (c >= 65))
		return (1);
	else if ((c >= 97) && (c <= 122))
		return (1);
	else
		return (0);
}
