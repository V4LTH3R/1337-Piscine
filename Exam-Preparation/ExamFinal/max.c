#include <stdio.h>
int		max(int* tab, unsigned int len)
{
    unsigned int i = 0;
    int max = tab[0];
    while (i < len)
    {
        if (max < tab[i])
            max = tab[i];
        i++;
    }
    return max;
}

int main(void)
{
    int tab[] = {99,2,3,4,5,100};
    printf("%i\n", max(tab, 6));
}