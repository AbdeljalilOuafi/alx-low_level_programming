#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the opcodes of its own main function
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int b, h;
	int (*address)(int, char **) = main;
	unsigned char opc;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	b = atoi(argv[1]);

	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (h = 0; h < b; h++)
	{
		opc = *(unsigned char *)address;
		printf("%.2x", opc);

		if (h == b - 1)
			continue;
		printf(" ");

		address++;
	}

	printf("\n");

	return (0);
}
