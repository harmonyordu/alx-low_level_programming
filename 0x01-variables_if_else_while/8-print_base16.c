#include<stdio.h>
/**
 *main - This is where teh program starts printing in hexadecimal.
 * Return: Always (0)
 */

int main(void)
{
	int x;
	char c;

	for (x = 0; x < 10; x++)
		putchar((x % 10) + '0');
	for (c = 'a'; c <= 'f'; c++)
	putchar(c);
	putchar('\n');

return (0);
