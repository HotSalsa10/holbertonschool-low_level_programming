#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 *
 * Return: converted integer
 */
int _atoi(char *s)
{
int i, sign, number, found_digit;

i = 0;
sign = 1;
number = 0;
found_digit = 0;

while (s[i] != '\0')
{
if (s[i] >= '0' && s[i] <= '9')
{
found_digit = 1;
if (sign == -1)
number = number * 10 - (s[i] - '0');
else
number = number * 10 + (s[i] - '0');
}
else if (found_digit == 0)
{
if (s[i] == '-')
sign = -sign;
}
else
break;
i++;
}

return (number);
}
