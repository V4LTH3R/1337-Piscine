#include <unistd.h>
#include <stdlib.h>

int upperlen(char *str)
{
    int len = 0;
    int i = 0;
    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            len++;
        i++;
    }
    return len + i;
}

char    *cameltosnake(char *str)
{
    int i = 0;
    int pass = 0;
    char *new = malloc(sizeof(char) * upperlen(str) + 1);
    if (!new)
        return NULL;
    while (str[i])
    {
        if ((str[i] >= 'A' && str[i] <= 'Z'))
        {
            new[pass++] = '_';
            new[pass++] = str[i] + 32;
        }
        else
            new[pass++] = str[i];
        i++;
    }
    new[++i] = 0;
    return new;
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

int main(int ac, char **av)
{
    if (ac == 2)
    {
        char *cml = cameltosnake(av[1]);
        ft_putstr(cml);
    }
    write(1, "\n", 1);
}