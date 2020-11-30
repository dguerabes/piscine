void my_putchar(char c);

void my_print_comb2()
{
    for (char millieme = '0'; millieme <= '9'; millieme++)
    {
        for (char centaine = '0'; centaine <= '9'; centaine++)
        {
            for (char dizaine = millieme; dizaine <= '9'; dizaine++)
            {
                for (char unite = centaine; unite <= '9'; unite++)
                {
                    if (millieme != centaine && centaine != unite)
                    {
                        my_putchar(millieme);
                        my_putchar(centaine);
                        my_putchar(' ');
                        my_putchar(dizaine);
                        my_putchar(unite);
                        my_putchar('\n');
                    }
                }
            }
        }
    }
}
