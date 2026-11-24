
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - performs simple arithmetic operations
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op_func = get_op_func(argv[2]);

	if (op_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0)
		&& atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", op_func(atoi(argv[1]), atoi(argv[3])));

	return (0);
}

