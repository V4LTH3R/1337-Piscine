#include <unistd.h>

int is_char_in_str(char c, char *str)
{
    int i = 0;
    while (str[i])
    {
        if (str[i] == c)
            return 1;
        i++;
    }
    return 0;
}

int is_char_repeat(int c, char *str, int i)
{
    while (i--)
    {
        if (c == str[i])
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
            if ((is_char_in_str(av[1][i], av[2]) == 1)
            && !(is_char_repeat(av[1][i], av[1], i)))
                write(1, &av[1][i], 1);
            i++;
        }
        
    }
    write(1, "\n", 1);
}