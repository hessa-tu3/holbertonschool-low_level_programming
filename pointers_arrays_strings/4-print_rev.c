#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: String to print
 */
void print_rev(char *s)
{
	int length;

	length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	while (length > 0)
	{
		_putchar(s[length - 1]);
		length--;
	}

	_putchar('\n');
}
