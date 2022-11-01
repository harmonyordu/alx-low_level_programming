#include "main.h"


/**
  *_memset -> A  memory set function.
  * @s: A string
  * @b: a character
  * @n: an integer
  * Return: It returns a string
  */


char *_memset(char *s, char b, unsigned int n)

{

	unsigned int a;

	for (a = 0; a < n; a++)

		s[a] = b;

	return (s);
}
