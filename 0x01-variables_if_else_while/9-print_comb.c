#include<stdio.h>

/**
 *main - Entry point
 *Description- A program that prints digit number
 *Return: value is Zero 0 (success)
 */


int main(void)

{

int x;
for (x = 48; x < 57; x++)

{

	putchar(x);

	if (x < 57)
	{

	putchar(44);
	putchar(32);
	}
}
putchar('\n');
return (0);

}
