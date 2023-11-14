#include "main.h"

/**
 * chars_print - a function that prints a character
 *
 * @args_ls: va_list containing the actual character to print
 * Return: no. of chars printed
 */
int chars_print(va_list arg_ls)
{
        int record;
        char charsit = va_arg(args_ls, int);

        record = _putchar(charsit);
        return (record);
}
