#include <stdlib.h>
#include "main.h"
/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 *           containing a copy of the string given as a parameter.
 * @str: The string to be duplicated
 *
 * Return: Pointer to the duplicated string, or NULL if it fails
 */
char *_strdup(char *str)
{
	if (str == NULL)
		return (NULL);

	unsigned int length = 0;
	while (str[length] != '\0')
		length++;

	char *duplicate = (char *)malloc(sizeof(char) * (length + 1));
	if (duplicate == NULL)
		return (NULL);

	for (unsigned int i = 0; i <= length; i++)
		duplicate[i] = str[i];

	return (duplicate);
}

