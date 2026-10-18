#include <unistd.h>

int is_char_there(char *str, char c, int i)
{
    while (i--)
    {
        if (str[i] == c)
            return 1;
    }
    return 0;
}

int main(int ac, char **av)
{
    if (ac == 3)
    {
        int i = 0;
        while (av[1][i])
        {
            if (av[1][i] && !is_char_there(av[1], av[1][i], i))
                write(1, &av[1][i], 1);
            i++;
        }
        int len = i;
        i = 0;
        while (av[2][i])
        {
            if (av[2][i] && !is_char_there(av[2], av[2][i], i)
                && (!is_char_there(av[1], av[2][i], len)))
                    write(1, &av[2][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}