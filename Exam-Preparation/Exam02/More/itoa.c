#include <stdlib.h>
#include <stdio.h>

int nbrlen(long nbr)
{
    int count = 0;
    if (nbr == 0)
        return 1;
    if (nbr < 0)
    {
        count++;
        nbr = -nbr;
    }
    while (nbr)
    {
        nbr /= 10;
        count++;
    }
    return count;
}

char	*ft_itoa(int nbr)
{
    long nb = nbr;
    int len = nbrlen(nb);
    char *arr = malloc(sizeof(char) * (len + 1));
    if(!arr)
        return NULL;
    arr[len] = '\0';
    len--;
    if (nb == 0)
        arr[0] = '0';
    if (nb < 0)
    {
        arr[0] = '-';
        nb = -nb;
    }
    while (nb)
    {
        arr[len] = nb % 10 + 48;
        nb /= 10;
        len--;
    }
    return arr;
}


int	main(void)
{
	printf("%s\n", ft_itoa(-98765));
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(-2147483648));
	return (0);
}