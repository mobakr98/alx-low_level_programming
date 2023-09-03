#include "main.h"

/**
 * _strlen_recursion -  function that returns the length of a string
 *
 * @s: function parameter
 *
 * Return: Nothing
 */

int _strlen_recursion(char *s)
{
int index;
int counter;

counter = 0;
for (index = 0; s[index] != '\0'; index++)
{
counter++;
}
_putchar('0' + counter);
}
