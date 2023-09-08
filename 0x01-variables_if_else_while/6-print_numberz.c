#include <stdio.h>
/**
 * main - Entry point of the programme.
 *
 * Description: Print all single digit of base 10
 * starting from 0 and followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char num[10] = "0123456789";

	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(num[i]);
	}
	putchar('\n');
	return (0);

}
