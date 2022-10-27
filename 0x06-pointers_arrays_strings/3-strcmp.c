#include "main.h"


/**
 * _strcmp - compare two strings
 * @s1: First string
 * @s2: Second string
 * Return: int that tells num of spaces
 */


int _strcmp(char *s1, char *s2)

{

	int i = 0;


	while (*(s1 + i) == *(s2 + i) && *(s1 + i))

		i++;



	if (*(s2 + i))

		return (*(s1 + i) - *(s2 + i));

	else

		return (0);

}
