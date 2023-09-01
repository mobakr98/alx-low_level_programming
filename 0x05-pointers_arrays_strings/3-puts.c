#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * _puts - function that prints a string
 * followed by a new line
 * to stdout
 *
 * @str: string parameter to be printed
 *
 * Return: Nothing
 *
 */

void _puts(char *str)
{
while (*str != '\0')
{
_putchar (*str + '0');
*str ++;
}
_putchar('\n');
}
