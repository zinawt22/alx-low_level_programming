#include "main.h"

/**
 * print_sign - takes parameter n and compare it to 0
 *
 *@n: is an int variable declared in print_sign
 * Return: returns 0.
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar ('+');
return (1);
}

else if (n == 0)
{
_putchar ('0');
return (0);
}

else
{
_putchar ('-');
return (-1);
}

}
