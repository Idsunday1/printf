
#include "main.h"

/**
 * int_printer - a function that prints a long int digit by digit
 *
 * @intg: int that will be printed
 * @recorder: keep track of count the numbers printed
 *
 * Return: recorded number printed
 */
int int_printer(long intg, int recorder)
{
	if (intg < 0)
	{
		_putchar('-');
		recorder++;
		intg = intg * -1;
	}
	if (intg / 10)
	{
		recorder = int_printer(intg / 10, recorder);
	}
	_putchar(intg % 10 + '0');
	return (recorder + 1);
}

