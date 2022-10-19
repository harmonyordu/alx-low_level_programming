#include "main.h"

/**
 *_islower - returns 1 if lowercase else zero
 *Return: 1 if c is lowercase, and  0 otherwise
 *Description - a function that checks for lowercase character.
 *@c: the variable
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
