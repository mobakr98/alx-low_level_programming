#include "main.h"
#include <unistd.h>

/**
 * _isupper - function that checks for uppercase character
 *
 * @c: character to check
 *
 * Return: 1 if c is digit, 0 otherwise
 *
 */

int _isdigit(int c)
{
if (c >= 0 && c <= 9)
{
return (1);
}
return (0);
}
