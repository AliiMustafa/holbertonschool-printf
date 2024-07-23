#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
/**
 * _putchar - function
 * @c: variable
 * Return: 0
 */
int _putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
/**
 * print_char - print characters
 * @args - number of arguments
 * Return length of chars
 * **/
int print_char(va_list args)
{
	char *a;

	a = va_arg(args, int);
	_putchar(c);
}
/**
 * print_str - print strings
 * @args number of arguments
 * Return length of the string
 * */
int print_str(va_list args)
{
	char *b;
	int i;

	b = va_arg(args, char*);
	if (b = NULL)
	{
		b = "(null)"
	}
	else 
	{
		for (i = 0; b[i] != '\0'; i++)
		{
			_putchar(b[i]);
		}
	}
	return (i);
}
/**
 * print_int - print integers
 * @args - number of arguments
 * Return
 * **/
int print_int(va_list args)
{
}
