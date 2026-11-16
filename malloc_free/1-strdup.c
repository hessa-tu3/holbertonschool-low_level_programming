#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicates a string
 * @str: string to duplicate
 *
 * Return: pointer to duplicated string, or NULL
 */
char *_strdup(char *str)
{
	char *new_str;
	unsigned int length = 0;
	unsigned int i;

	if (str == NULL)
		return (NULL);

	while (str[length] != '\0')
		length++;

	new_str = malloc(sizeof(char) * (length + 1));

	if (new_str == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
		new_str[i] = str[i];

	return (new_str);
}
