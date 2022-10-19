#include "main.h"
/**
 *print_alphabet_x10- The program starts here
 *Return- returns void
 *Description- a function that prints 10 times the alphabet, in lowercase
 */

void print_alphabet_x10(void)
{
	char c = 'a';
	int i = 0;

	while (i <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}

		i++;
		_putchar('\n');
	}
}




