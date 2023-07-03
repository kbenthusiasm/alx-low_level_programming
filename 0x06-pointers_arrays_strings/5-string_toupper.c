#include "main.h"

/**
 * string_toupper - changes all lowerase letters
 * of a string to uppercase.
 * @str: the string to be changed.
 * Return: A pointer to the changed string.
 */

char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
	if (str[index] >= '0' && str[index] <= '2')
	str[index] -= 32;
	index++;
	}
	return (str);
}
