/*
 * file - 11-print_to_98.c
 */

#include "main.h"
#include <stdio.h>

/**
 *Print_to_98 - Check Holberton
 *@n : A input integer
 *Description:prints all natural numbers from n to 98, followed by a new line.
 *Return:Nothing
*/

void print_to_98(int n)
{
while (n < 98)
{
printf("%i, ", n);
n++;
}
while (n > 98)
{
printf("%i, ", n);
n--;
}

printf("98");
putchar('\n');
}

