#include "main.h"

/**
 * print_triangle - Prints a triangle
 * @size: Size of the triangle
 *
 * Return: Nothing
 */
void print_triangle(int size)
{
	int row, col;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (row = 0; row < size; row++)
	{
		for (col = 0; col < size - row - 1; col++)
			_putchar(' ');

		for (col = 0; col <= row; col++)
			_putchar('#');

		_putchar('\n');
	}
}
