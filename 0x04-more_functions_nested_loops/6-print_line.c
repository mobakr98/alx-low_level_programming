#include "main.h"
#include <unistd.h>

/**
 * print_line - function that draws a straight line in the terminal
 *
 * @n: number of times the character _ should be printed
 *
 * Return: void
 */

void print_line(int n)
{
int i;

if (n <= 0)
{
putchar ('\n');
}
else
{
for (i = 0; i <= n; i++)
{
putchar ('_');
}
putchar ('\n');
}
}
