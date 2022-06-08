#include "main.h"


/**
 * print_alphabet: prints alphabet with lowercase
 *
 * Return: and returns 0.
 */

void print_alphabet(void)
{
char alphabet;

for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
}

_putchar('\n');

}
