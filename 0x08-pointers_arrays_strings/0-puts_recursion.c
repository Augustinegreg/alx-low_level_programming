#include "main.h"

/**
 * _puts_recursion - prints a string and new line to stdout
 * 
 * @s: string to be print
 * 
 * Return: Nil
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(++s);
}
