#include "main.h"
#include <unistd.h>

/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14
 * followed by a new line
 *
 * @c: characters to print
 * @i: character to count
 *
 * Return: void
 *
 */

void more_numbers(void)
{
char c;
int i;

for (i = 0; i <= 10; i++)
{
for (c = '@'; c <= 'N'; c++)
{
putchar ('0' + c);
}
}
putchar ('\n');
}
