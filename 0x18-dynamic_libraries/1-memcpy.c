#include "main.h"

/**
 * _memcpy - function copies n bytes from memory area
 * @dest: pointer to destination
 * @src: pointer to source
 * @n: number of bytes to copy
 * Return: *dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int idx;

	for (idx = 0; idx < n; idx++)
	{
		dest[idx] = src[idx];
	}
	return (dest);
}
