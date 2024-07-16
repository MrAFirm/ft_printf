#include "ft_printf"

int ft_putptr(void *ptr)
{
    int *int_ptr;
    int value;
    int dereferencing;

    int_ptr = (int *)ptr;
    *ptr = &value;
    dereferencing = *ptr;
    return (dereferencing);
}

int ft_putchar(int c)
{
    char i;
    i = (char)c;
    write(1, &i, 1);
    return (1);
}

int ft_puthex(unsigned int num)
{
    char *hex_chars;
    hex_chars = "0123456789abcdef";
    count = 0;
    if (num >= 16)
        count += ft_puthex(num / 16);
    else ft_putchar(num % 16);
    count++;
    return (count);
}
