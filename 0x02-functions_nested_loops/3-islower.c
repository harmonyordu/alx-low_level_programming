#include "main.h"

/**
 *int _islower- returns 1 if lowercase else zero
 *Return- 1 if true zero if false
 *Description - a function that checks for lowercase character.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
