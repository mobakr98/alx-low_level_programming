#include "main.h"
#include <unistd.h>
/**
 * _abs - main function
 *
 * @n: integer to make absolute
 *
 * Return: integer value of of an integer
 *
 */
int _abs(int n)
{
if (n > 0)
{
_putchar (n);
}
else
{
_putchar (-1 * n);
}
}
