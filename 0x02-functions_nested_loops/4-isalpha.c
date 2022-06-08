#include "main.h"

/**
 * _isalpha - if c is a letter, return 1.
 *
 *@c: int variable assigned is alpha
 * Return: returns 0.
 */

int _isalpha(int c)

{

if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
{
return (1);
}

else
{
return (0);
}

}

