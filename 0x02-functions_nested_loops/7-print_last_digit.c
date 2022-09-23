#include "main.h"

int
_abs(int n)
{
if (n >= 0)
{
return (n);
}
else
{
return (-1 * n);
}
}

int
print_last_digit(int n)
{
int lastDigit;

lastDigit = _abs((n % 10));
_putchar(lastDigit + 48);
return (lastDigit);
}
