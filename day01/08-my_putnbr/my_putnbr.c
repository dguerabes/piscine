void my_putchar(char c);
#include <stdio.h>

void my_putnbr(int n)
{
    if (n < 0)
    {
        my_putchar('-');
        my_putnbr(n * (-1));
    }
    else if (n > 9)
    {
        my_putnbr(n / 10);
        my_putchar((n % 10) + 48);
    }
    else
        my_putchar(n + 48);
}
