#include "main.h"
#include <stdio.h>
#include <stdarg.h>


/**
 * fun_string - print string
 * @arguments: va_list
 * Return: string
 */

int fun_string(va_list arguments)
{
	char *s;
	int i = 0;

	s = va_arg(arguments, char *);

	if (s == NULL)
	{
		s = "(null)";
	}
	for (; *s; s++)
	{
		putchar(*s);
		i++;
	}
	return (i);
}

/**
 * fun_character - print character
 * @arguments: va_list
 * Return: character
 */

int fun_character(va_list arguments)
{
	int x = 0;

	x = va_arg(arguments, int);
	_putchar(x);
	return (1);
}

/**
 * fun_integer - print integer and digit
 * @arguments: va_list
 * Return: int
 */

int fun_integer(va_list arguments)
{
	int i, d, length;
	unsigned int x;

	i  = va_arg(arguments, int);
	d = 1;
	length = 0;

	if (i < 0)
	{
		length = length + _putchar('-');
		x = i * -1;
	}
	else
		x = i;

	while (x / d > 9)
		d = d * 10;
	while (d != 0)
	{
		length = length + _putchar('0' + x / d);
		x = x % d;
		d = d / 10;
	}
	return (length);
}
