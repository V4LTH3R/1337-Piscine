#include <unistd.h>

int    printChar(char c)
{
    int nb;
    if (c >= 'a' && c <= 'z')
        nb = (c - 'a') + 1;
    else if ((c >= 'A' && c <= 'Z'))
        nb = c - 64;
    else
        nb = 1;
    return nb;
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int i = 0;
        int nb;
        while (av[1][i])
        {
            nb = printChar(av[1][i]);
            while (nb--)
                write(1, &av[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}