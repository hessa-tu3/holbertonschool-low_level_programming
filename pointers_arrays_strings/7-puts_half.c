#include "main.h"

/**
 * puts_half - Prints the second half of a string
 * @str: String to print
 */
void puts_half(char *str)
{
	int length;
	int i;

	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	for (i = length / 2; i < length; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
