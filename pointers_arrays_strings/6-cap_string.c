
#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str: String to capitalize
 *
 * Return: Pointer to the modified string
 */
char *cap_string(char *str)
{
	int i;
	int j;
	char separators[] = " \t\n,;.!?\"(){}";

	i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0)
				str[i] = str[i] - 32;
			else
			{
				j = 0;
				while (separators[j] != '\0')
				{
					if (str[i - 1] == separators[j])
					{
						str[i] = str[i] - 32;
						break;
					}
					j++;
				}
			}
		}
		i++;
	}

	return (str);
}
