#include "main.h"
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
 * @args:  number of arguments
 * Return: length of chars
 */
int print_char(va_list args)
{
	char a;

	a = _putchar(va_arg(args, int));
	return (a);
}
/**
 * print_str - print strings
 * @args: number of arguments
 * Return: length of the string
 */
int print_str(va_list args)
{
	char *b;
	int i;

	b = va_arg(args, char*);
	if (b == NULL)
	{
		b = "(null)";
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		_putchar(b[i]);
	}
	return (i);
}
/**
 * print_int - print integers
 * @args: number of arguments
 * Return: lengs of num
 */
int print_int(va_list args)
{
	int b = 1, l = 0;
	int num;
	char digit;

	num = va_arg(args, int);
	if (num < 0)
	{
		num = -num;
		_putchar('-');
	}
	while ((num / b) >= 10)
	{
		b = b * 10;
	}
	while (b != 0)
	{
		digit = '0' + num / b;
		_putchar(digit);
		num = num % b;
		b = b / 10;
		l++;
	}
	return (l);
}
