#include "main.h"

/**
 * _strlen - function that checks the length of a string
 *
 * @s: function parameter
 *
 * Return: always 0
 *
 */

int _strlen(char *s)
{
	int len = 0;

	for (; *s != '\0'; s++)
	{
		len++;
	}
	return (len);
}
