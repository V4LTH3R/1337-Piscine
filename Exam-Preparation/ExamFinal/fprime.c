#include <stdlib.h>
#include <stdio.h>

int ft_prime(int nb)
{
    if(nb < 2)
        return 0;
    int i = 2;
    while (i <= nb / 2)
    {
        if (nb % i == 0)
            return 0;
        i++;
    }
    return 1;
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int nb = atoi(av[1]);
        if (nb == 1)
            printf("1");
        else if (ft_prime(nb) == 1)
            printf("%i", nb);
        int i = 2;
        int check = 1;
        while (nb > 1)
        {
            if (nb % i == 0)
            {
                if(!check)
                    printf("*");
                printf("%i", i);
                check = 0;
                nb /= i;
            }
            else
                i++;
        }
    }
    printf("\n");
}