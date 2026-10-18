#include <stdlib.h>
#include <stdio.h>
int nbrlen(long nb, int base)
{
    int len = 0;
    if (nb == 0)
        return 1;
    else if(nb < 0)
    {
        len++;
        nb *= -1;
    }
    while (nb)
    {
        len++;
        nb /= base;
    }
    return len;
}

char    *basechar(int base)
{
    int i = 0;
    char *arr = "0123456789ABCDEF";
    char *bases = malloc(sizeof(char) * (base + 1));
    if (!base)
        return NULL;
    while (i < base)
    {
        bases[i] = arr[i];
        i++;
    }
    bases[i] = 0;
    return bases;
}

char	*ft_itoa_base(int value, int base)
{
    long nb = value;
    int len = nbrlen(nb, base);
    char *arr = malloc(sizeof(char) * (len + 1));
    char *bases = basechar(base);
    arr[len] = '\0';
    len--;
    if (nb == 0)
    {
        arr[0] = bases[0];
        return arr;
    }
    else if(nb < 0)
    {
        arr[0] = '-';
        nb *= -1;
    }
    while(nb)
    {
        arr[len] = bases[nb % base];
        nb /= base;
        len--;
    }
    return arr;
}

int main(void)
{
    char *arr = ft_itoa_base(-16, 16);
    printf("%s\n", arr);
}