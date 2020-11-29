void my_putchar(char c);

void my_print_comb()
{
    char centaine = '0';
    char dizaine = '0';
    char unite = '0';

    while (centaine != '8')
    {
        if (centaine != dizaine && dizaine != unite && unite != centaine)
        {
            my_putchar(centaine);
            my_putchar(dizaine);
            my_putchar(unite);
            my_putchar('\n');
        }
        if (unite == '9')
        {
            dizaine++;
            unite = dizaine;
        }
        if (dizaine == '9')
        {
            centaine++;
            dizaine = centaine;
        }
        unite++;
    }
}

int main()
{
    my_print_comb();
    return 0;
}