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
int counter;

counter = 0;
if (*s)
{
counter++;
_strlen_recursion(s + 1);
}
return(counter);
}
