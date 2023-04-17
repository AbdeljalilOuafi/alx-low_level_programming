#include "main.h"
/**
 * _puts - print string string string
 * @s: string
 * Return: nothing
 */
void _puts(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts(s + 1);
	}
	else
		_putchar('\n');
}
/**
 * main - prints the name of the file it was compiled from
 * @void: void
 * Return: SUCCESS
 */
int main(void)
{
	_puts(__FILE__);
	return (0);
}
