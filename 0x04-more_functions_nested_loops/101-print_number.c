#include "main.h"
#include <unistd.h>

/**
 * print_line - function that draws a straight line in the terminal
 *
 * @n: number of times the character _ should be printed
 *
 * Return: void
 */

void print_number(int n)
{
if (n == 0)
{
_putchar('0');
return;
}
if (n < 0)
{
_putchar('-');
n = -n;
}
}
