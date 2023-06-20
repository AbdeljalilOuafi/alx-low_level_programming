#include "main.h"

/**
 * _memset - function fills the first n bytes of the memory
 * @s: the pointer
 * @b: constant byte
 * @n: number of byte of memory
 * Return: *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int byte;

	for (byte = 0; byte < n; byte++)
	{
		s[byte] = b;
	}
	return (s);
}
