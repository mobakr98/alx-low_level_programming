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
if (*s)
{
_strlen_recursion(s + 1);
counter++;
}
return(counter);
}