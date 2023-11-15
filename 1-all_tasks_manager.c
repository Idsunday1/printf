#include "main.h"
/**
 * b_print - Prints an unsigned integer in binary representation.
 * @args_ls: A va_list containing the unsigned integer to print
 *
 * Return: The number of characters printed.
 */
int b_print(va_list args_ls)
{
	unsigned int intg = va_arg(args_ls, unsigned int);
	int record = 0;
	int y = 0;
	int x;

	for (i = sizeof(intg) * 8 - 1; i >= 0; i--)
	{
		int intit = (intg >> i) & 1;

		if (intit == 1 || y)
		{
			_putchar(intit + '0');
			record++;
			y = 1;
		}
	}

	if (record == 0)
	{
		_putchar('0');
		record++;
	}
	return (record);
}
