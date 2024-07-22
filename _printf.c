#include "main.h"

/**
 * _printf - function
 * @format: pointer
 * Return: lengs
 */
int _printf(const char *format, ...)
{
	va_list arr;
	int i = 0, j = 0, leng = 0;
	char *temp;

	va_start(arr, format);

	if (format[i])
	{
		while (format[i])
		{
			if (format[0] == '%' && !format[1])
				return (-1);
			else if (format[i] == '%' && format[i + 1] == 'c')
				_putchar(va_arg(arr, int)), i = i + 2, leng++;
			else if (format[i] == '%' && format[i + 1] == 's')
			{
				temp = va_arg(arr, char*);
				if (temp == NULL)
					temp = "(null)";
				while (temp[j])
					_putchar(temp[j]), j++;
				leng = leng + j, i = i + 2, j = 0;
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
