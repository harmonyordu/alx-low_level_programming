#include "main.h"

/**
 *_isalpha- a function that checks for alphabetic character
 *@c: The character variable
 *Return: 1 if c is an alphabet returns 0 if any
 */

int _isalpha(int c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}

	return (0);
}

