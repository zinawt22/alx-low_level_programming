#include <stdio.h>


/**
 * main - prints multiple of 3 or 5 sums under 1024
 * Return: returns 0.
 */

int
main(void)
{


int n;

int sum = 0;


for (n = 0; n < 1024; n++)
    {

if ((n % 3 == 0) || (n % 5 == 0))
	{

sum += n;

}

}


printf("%d\n", sum);


return (0);

}