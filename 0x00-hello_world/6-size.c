#include <stdio.h>
/**
 *main -is the beginning of the program
 *Return: value should be zero
 *
 *A program that prints the different types of data types in C
 */

int main(void)

{
printf("Size of a char: %zu bytes\n", sizeof(char));
printf("Size of an int: %zu bytes\n", sizeof(int));
printf("Size of a long int: %zu bytes\n", sizeof(long int));
printf("Size of a long long int: %zu bytes\n", sizeof(long long int));
printf("Size of a float: %zu bytes\n", sizeof(float));
return (0);
}
