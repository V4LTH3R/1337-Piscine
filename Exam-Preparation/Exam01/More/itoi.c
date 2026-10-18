#include <stdlib.h>
// nbr len
int nbr_len(long nbr)
{
    int len = 0;
    if (nbr < 0)
    {
        nbr = nbr * -1;
        len++;
    }
    if (nbr == 0)
        return 1;
    else if (nbr)
     {
        nbr /= 10;
        len++;
     }
     return len;
}

char	*ft_itoa(int nbr)
{
    int long nb = nbr;
    int len = nbr_len(nb);
    char *arr = malloc(sizeof(int) * len + 1);
    if (!arr)
        return NULL;
    arr[len] = 0;
    len--;
    if (nb < 0)
    {
        arr[0] = '-';
        nb *= -1; 
    }
    if (nb == 0)
    {
        arr[0] = '0';
        return arr;
    }
    if (nb)
    {
        arr[len] = nb %  + 48;
        nb /= 10;
        len--;
    }
    return arr;
}