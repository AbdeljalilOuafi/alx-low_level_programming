#include "main.h"

/*
 * print_alphabet_x10 - prints alphabet 10 times
 * followed by a new line.
 */
void print_alphabet_x10(void)
{
	int i;

	int k; 

	for (i = 0; i < 10; i++)
	{
		for (k = 97; k < 123; k++)
		{
		_putchar(k);
		}
		_putchar('\n');
	}
}
