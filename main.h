#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <unistd.h>
int _printf(const char *format, ...);
int _putchar(char c);
int printf_char(va_list args);
int print_str(va_list args);
int print_int(va_list args);
#endif
