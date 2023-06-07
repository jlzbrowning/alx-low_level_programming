#include "main.h"
/**
 * _print-rev_recursion(char *s) - prints given string in reverse using recursion
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	else
	{
		return;
	}
}
