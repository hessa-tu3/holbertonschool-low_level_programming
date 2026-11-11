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

	i = length / 2;

	while (i < length)
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
