#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 *main - Beginning of the program
 *
 *rand - Generates a random number
 *
 *Return: value is zero
 *
 */

int main(void)
{

int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)

{

	printf("%d is positive\n", n);

}

if (n == 0)

{

	printf("%d is zero\n", n);
}

else

{

	printf("%d is negative\n", n);

}

return (0);

}
