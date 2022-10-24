#include "main.h"



/**
 * swap_int - This swaps the values of two integers
 * @a: The first integer
 * @b: The second integer
 * Return:It returns nothing
 */


void swap_int(int *a, int *b)

{

	int i;


  	i = *a;

	*a = *b;

	*b = i;

}
