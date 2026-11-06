#include <stdio.h>

/**
 * main - Prints single digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char number;

	number = '0';
	while (number <= '9')
	{
		putchar(number);
		number++;
	}
	putchar('\n');

	return (0);
}
