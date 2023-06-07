#include "main.h"
/**
 * _strlen_recursion(char *s) - return len of str
 * @s: str to return len of
 */
int _strlen_recursion(char *s)
{
	int tmp = 0
	if (*s)
	{
		++tmp;
		_strlen_recursion(s + 1);
	}
}
