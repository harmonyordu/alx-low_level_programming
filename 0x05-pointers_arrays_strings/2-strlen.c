#include "main.h"


/**
 * _strlen - to calculate the length of a string.
 * @s: name of string pointer
 * Return: Result (i)
 */


int _strlen(char *s)

{

	int i;

	i = 0;

	while (*s != '\0')

	{

		i++;

		s++;

	}

	return (i);

}
