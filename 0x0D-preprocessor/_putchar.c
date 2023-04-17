#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1
 */
void _putchar(char c)
{
        write(1, &c, 1);
}
