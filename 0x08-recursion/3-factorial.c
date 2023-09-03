#include "main.h"

/**
 *
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
if (n == 1)
{
return (1);
}
else
{
fact = 1;
fact *= n;
factorial(n - 1);
}
return (fact);
}
