#include <stdio.h>

/**
 *main - The program starts here
 *Return: value is zero
 */

int main(void)
{

char x;
for (x = 'a'; x <= 'z'; x++)
{
	if (x == 'q' || x == 'e')
{
	continue;
}
putchar(x);
}

putchar('\n');
return (0);
}
