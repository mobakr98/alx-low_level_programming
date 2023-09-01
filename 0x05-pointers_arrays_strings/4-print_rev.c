#include "main.h"
#include <unistd.h>

/**
 * print_rev - function that prints a string
 * in reverse
 * followed by a new line
 *
 * @s: string parameter to be printed
 *
 * Return: Nothing
 *
 */

void print_rev(char *s)
{
int index;

for (index = 0; s[index] != '\0'; index++)
{
;
}

for (--index; index >= 0; index--)
{
_putchar(s[index]);
}
_putchar('\n');
}
