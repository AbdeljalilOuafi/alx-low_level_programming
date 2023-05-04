#include "main.h"

/**
 * get_endianness - check if  machine is little or big endian
 * Return: 0 for a big,and 1 for little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
