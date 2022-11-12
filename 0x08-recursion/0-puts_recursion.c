#include "main.h"

/*
 * _puts_recursion - prints a string
 *
 * @s: a string used
 *
 * Return: 0
 */

void _puts_recursion(char *s)
{
	if (s != NULL)
	_putchar(*s++);
}
