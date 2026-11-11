#include "main.h"

/**
 * append_digit - Adds a digit safely to a number
 * @number: Current number
 * @digit: Digit to add
 * @sign: Sign of the number
 * @max_int: Maximum integer value
 * @min_int: Minimum integer value
 * Return: Updated number
 */
static int append_digit(int number, int digit, int sign,
			int max_int, int min_int)
{
	if (sign > 0)
	{
		if (number > max_int / 10 ||
		    (number == max_int / 10 && digit > max_int % 10))
			return (max_int);
		return (number * 10 + digit);
	}
	if (number < min_int / 10 ||
	    (number == min_int / 10 && digit > -(min_int % 10)))
		return (min_int);
	return (number * 10 - digit);
}

/**
 * _atoi - Converts a string to an integer
 * @s: The string to convert
 * Return: The converted integer
 */
int _atoi(char *s)
{
	int i;
	int sign;
	int number;
	int digit;
	int max_int;
	int min_int;

	i = 0;
	sign = 1;
	number = 0;
	max_int = (int)(~0U >> 1);
	min_int = -max_int - 1;

	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			sign = -sign;
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		digit = s[i] - '0';
		number = append_digit(number, digit, sign, max_int, min_int);
		i++;
	}

	return (number);
}
