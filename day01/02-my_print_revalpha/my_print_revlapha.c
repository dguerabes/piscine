void my_putchar(char c);

void my_print_revlalpha(void)
{
    char letter = 'z';

    while (letter >= 'a')
    {
        my_putchar(letter);
        letter--;
    }
    my_putchar('\n');
}