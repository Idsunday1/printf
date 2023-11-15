
#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int string_print(va_list args_ls);
int chars_print(va_list arg_ls);
int percent_print(va_list arg_ls);
int d_print(va_list args_ls);
int i_print(va_list args_ls);
int _putchar(char c);
int _printf(const char *format, ...);
int (*ma_selector(char strn))(va_list args_ls);
int int_printer(long intg, int recorder);

#endif /* MAIN_H */
