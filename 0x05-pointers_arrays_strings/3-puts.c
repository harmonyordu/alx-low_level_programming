#include "main.h"


/**
 * _puts - It prints a string
 * @str: The name of the pointer variable.
 * Return: nothing
 */


void _puts(char *str)

{

	for (; *str != '\0'; str++)

	{

		_putchar(*str);

	}



	_putchar('\n');

}
