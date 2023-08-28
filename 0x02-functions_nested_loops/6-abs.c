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
return (n);
}
else
{
return (-1 * n);
}
}
