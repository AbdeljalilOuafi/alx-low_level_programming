#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: string
 * @accept: byte
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int acc;

	while (*s)
	{
		for (acc = 0; accept[acc]; acc++)
		{
			if (*s == accept[acc])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
