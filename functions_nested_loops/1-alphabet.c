#include "main.h"

/**
 * print_alphabet - Prints the lowercase alphabet
 *
 * Return: Nothing
 */
void print_alphabet(void)
{
	char letter;

	letter = 'a';
	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
