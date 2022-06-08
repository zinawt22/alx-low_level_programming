#include "main.h"
#include <stdio.h>

/**
 * _abs - calculate absolute value function
 *
 *@n: assigned int variable in to print in abs value
 * Return: returns 0.
 */

int _abs(int n)
{

if (n < 0)
{
return (n * (-1));
}

else if (n == 0)
{
return (0);
}

else
{
return (n);
}

}
