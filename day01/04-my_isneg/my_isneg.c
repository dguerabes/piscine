void my_putchar(char c);

void my_isneg(int n)
{
    n >= 0 ? my_putchar('P') : my_putchar('N');
}

int main()
{
    my_isneg(-1);
    return 0;
}