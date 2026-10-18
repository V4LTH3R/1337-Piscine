#include <stdio.h>

int  until_one_digit(int nb)
{
    int sum = 0;
    while (nb > 9)
    {
        while (nb)
        {
            sum += nb % 10;
            nb /= 10;
        }
        nb = sum;
    }
    return nb;
}

int sum_digit(char *str)
{
    int i = 0;
    int sum = 0;
    int nb = 0;

    while (str[i])
    {
        if (str[i] >= '0' && str[i] <= '9')
            nb = (nb * 10) + str[i] - 48;
        i++;
    }
    while (nb)
    {
        sum += nb % 10;
        nb /= 10;
    }
    return one_digit(sum);
}

int main()
{
    printf("%i\n", sum_digit("123hh456"));
}