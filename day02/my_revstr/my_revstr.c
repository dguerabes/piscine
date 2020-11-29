void my_putchar(char c);

int my_strlen(const char *str)
{
    const char *initPointer = str;

    while (*str != '\0')
        *str++;
    return (str - initPointer);
}

char *my_revstr(char *str)
{
    int length = my_strlen(str) - 1;
    int index = 0;

    while (index <= length)
    {
        char c = str[index];
        str[index] = str[length];
        str[length] = c;
        index++;
        length--;
    }
    return str;
}
