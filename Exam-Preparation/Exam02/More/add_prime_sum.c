#include <unistd.h>
#include <stdlib.h>

int prime(int nb)
{
    int i = 2;
    if (nb < 2)
        return 0;
    while (i <= nb / 2)
    {
        if (nb % i == 0)
            return 0;
        i++;
    }
    return 1;
}

void ft_putnbr(int nb)
{
    if (nb > 9)
        ft_putnbr(nb / 10);
    char c = nb % 10 + 48;
    write(1, &c, 1);
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int nb = atoi(av[1]);
        int i = 2;
        int sum = 0;
        while (i <= nb)
        {
            if (prime(i))
                sum += i;
            i++;
        }
        ft_putnbr(sum);
    }
    write(1, "\n", 1);
}