#include "main.h"

/**
 * factorial - function that returns the factorial of a given number
 *
 * @n: integer to return its factorial
 *
 * Return: Always 0
 */

int factorial(int n)
{
int fact;

if (n < 0)
{
return (-1);
}
else if (n == 1)
{
return (1);
}
else
{
fact = factorial(n - 1) *  n;
}
return (fact);
}
