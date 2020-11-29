void my_putchar(char c);

int my_strlen(const char *str)
{
    const char *initPointer = str;

    while (*str != '\0')
        *str++;
    return (str - initPointer);
}
