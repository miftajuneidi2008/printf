#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int _putchar(char c);
int fun_string(va_list arguments);
int fun_character(va_list arguments);
int fun_integer(va_list arguments);
#endif
