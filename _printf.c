#include "main.h"
/**
 * _printf - function
 * @format: pointer
 * Return: lengs
 */
int _printf(const char *format, ...)
{
	va_list arr;
	int i = 0, leng = 0;

	va_start(arr, format);

	if (format[i])
	{
		while (format[i])
		{
			if (format[0] == '%' && !format[1])
				return (-1);
			else if (format[i] == '%' && format[i + 1] == 'c')
				print_char(arr), i = i + 2, leng++;
			else if (format[i] == '%' && format[i + 1] == 's')
			{
				leng = leng + print_str(arr), i = i + 2;
			}
			else if (format[i] == '%' && (format[i + 1] == 'd' || format[i + 1] == 'i'))
			{
				leng = leng + print_int(arr);
				i = i + 2;
			}
			else if (format[i] == '%' && format[i + 1] == '%')
				_putchar('%'), i = i + 2, leng++;
			else
				_putchar(format[i]), i++, leng++;
		}
	}
	va_end(arr);
	return (leng);
}
