void my_putchar(char c);

void my_print_alpha(void)
{
    char letter = 'a';

    while (letter <= 'z')
    {
        my_putchar(letter);
        letter++;
    }
    my_putchar('\n');
}