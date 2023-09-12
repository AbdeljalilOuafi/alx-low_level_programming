#include "main.h"

/**
 * _islower - check if char is lower
 * @c: character to be checked
 * Return: 1 if char is lower, 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
