void my_putchar(char c);

void my_print_digits(void)
{
    char number = '0';

    while (number <= '9')
    {
        my_putchar(number);
        number++;
    }
    my_putchar('\n');
}

int main()
{
    my_print_digits();
    return 0;
}