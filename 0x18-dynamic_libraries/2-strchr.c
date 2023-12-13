#include "main.h"
#include <stddef.h>

/**
 * _strchr - locate character in a string
 * @s: pointer to string
 * @c: character to be located
 * Return: pointer to first occurrence of c in s, or NULL if not found
 */

char *_strchr(char *s, char c)

{
	while (*s != '\0')
	{
		if (*s == c)
		return (s);
		s++;
	}

	if (c == '\0')
		return (s);

	return (NULL);
}
