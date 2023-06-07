#include "main.h"
/**
 * _strlen_recursion(char *s) - return len of str
 * @s: str to return len of
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
