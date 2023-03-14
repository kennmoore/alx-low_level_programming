#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Program that multiplies two integer arguments and prints their product
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 1 if not enough arguments passed in, else return error
 */

int main(int argc, char *argv[])
{
	int i, j;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		j = 1;

		for (i = 1; i < 3; i++)
			j *= atoi(argv[i]);

		printf("%d\n", j);
	}

	return (0);
}
Footer
© 2023 GitHub, Inc.
Footer navigation

