#include <stdio.h>

/**
 * main - Programme that prints the alphabets in lower and upper case.
 *
 * Return: Always 0
 */
int main(void)
{
	char alp[53] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (int i = 0; i < 52; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
