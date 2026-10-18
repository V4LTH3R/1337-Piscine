#include <unistd.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return i;
}

void    ft_putstr(char *str)
{
    int i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}

int main(int ac, char *av[])
{
    if (ac == 4)
    {
        int i = 0;
        if (ft_strlen(av[2]) > 1 || ft_strlen(av[3]) > 1)
            write(1, "FALSE\n", 6);
        else
        {
            while (av[1][i])
            {
                if (av[1][i] == av[2][0])
                    av[1][i] = av[3][0];
                i++;
            }
            ft_putstr(av[1]);
        }
    }
    else if (ac > 4)
        write(1, "FALSE\n", 6);
    else
        write(1, "FALSE\n", 6);
}