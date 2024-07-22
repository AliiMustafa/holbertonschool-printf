#include "main.h"
#include <stdarg.h>
#include <stddef.h>

int _printf(const char *format, ...)
{
	va_list arr;
	int i = 0, j = 0, leng = 0;
	char *temp;

	va_start(arr, format);

	if (format[i])
	{
		while(format[i])
		{
			if (format[i] == '%' && format[i + 1] == 'c')
			{
				_putchar(va_arg(arr, int));
				i = i + 2;
			}
			else if (format[i] == '%' && format[i + 1] == 's')
			{
				temp = va_arg(arr, char*);
				while (temp[j])
				{
					_putchar(temp[j]);
					j++;
				}
				leng = leng + j - 2;
				i = i + 2;
			}
			else if (format[i] == '%' && format[i + 1] == '%')
			{
				_putchar('%');
				i = i + 2;
			}
			else
			{
				_putchar(format[i]);
				i++;
			}
		}
	}
	va_end(arr);
	leng = leng + i;
	return (leng);
}
