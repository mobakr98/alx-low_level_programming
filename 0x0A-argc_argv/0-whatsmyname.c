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

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
