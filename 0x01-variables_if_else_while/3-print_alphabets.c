#include <stdio.h>

/**
 *main - The program starts here
 *Return: value is zero
 */

int main(void)

{

char x;

for (x = 'a'; x <= 'z'; x++)
putchar(x);
for (x = 'A'; x <= 'Z'; x++)
putchar(x);
putchar('\n');

return (0);

}
