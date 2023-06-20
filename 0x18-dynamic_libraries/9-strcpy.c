#include "main.h"

/**
* _strcpy - copy the string pointed to by src to dest
* @dest: char to check
* @src: char to check
* Return: 0 is success
*/
	char *_strcpy(char *dest, char *src)
	{
	int a = 0;

		while (src[a] != '\0')
		{
			dest[a] = src[a];
			a++;
		}
			dest[a] = '\0';

		return (dest);
	}
