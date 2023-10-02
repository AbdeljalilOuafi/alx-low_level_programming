#include <stdio.h>

/**
 * main - prints the number of arguments passed into the program
 * @argc: arguments count
 * @argv: arguments
 * Return: Alwyas 0.
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
