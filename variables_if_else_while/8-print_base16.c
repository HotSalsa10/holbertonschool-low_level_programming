#include <stdio.h>

/**
 * main - Prints hexadecimal numbers in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int digit;

for (digit = 0; digit <= 9; digit++)
{
putchar(digit + '0');
}
for (digit = 0; digit < 6; digit++)
{
putchar(digit + 'a');
}
putchar('\n');
return (0);
}
