#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 *main - Enter point
 *
 * Return: Always 0
 */

int main(void)
{
long int i = 612852475143;
long int p;

for (p = 2; p <= i; p++)
{
while (i % p == 0)
{
i /= p;
}
}
printf("%ld\n", p - 1);
return (0);
}

