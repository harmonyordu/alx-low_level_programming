#include "main.h"

/**
 * _memcpy - Function that copies memory area
 * @dest: A pointer to the destination memory area
 * @src: A pointer to source the memory area
 * @n: The number of bytes to copy
 * Return: pointer to destination memory area
 */



char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int i;

	for (i = 0; i < n; i++)

		dest[i] = src[i];

	return (dest);

}
