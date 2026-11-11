#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: String to measure
 * Return: Length of the string
 */
int _strlen(char *s)
{
	int length;

	length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
