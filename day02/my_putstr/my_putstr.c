void my_putchar(char c);

void my_putstr(const char *str)
{
    while (*str != '\0')
        my_putchar(*str++);
    my_putchar('\n');
}