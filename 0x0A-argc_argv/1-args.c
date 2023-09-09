#include <stdio.h>
#include "main.h"

/**
 * main - the main function
 *
 * @argc: arguments counter
 * @argv: arguments vector
 *
 * Return: Always 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
