#include "main.h"
#include <unistd.h>

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 *
 * @n: number of times the character / should be printed
 *
 * Return: void
 */

void print_diagonal(int n)
{
int i;

for (i = 0; i <= n; i++)
{
if (n <= 0)
{
putchar ('\n');
}
putchar (n * ' ');
putchar ('\\');
}
}
