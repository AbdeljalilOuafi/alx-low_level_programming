#include "main.h"

/**
 * isalpha - checks for alphabetic character
 * @c: char to be checked
 * Return: 1 if @c is alphabetic, 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
