#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    if (ac == 4)
    {
        int first = atoi(av[1]);
        int second = atoi(av[3]);
        int res = 0;
        if (av[2][0] == '*')
            res = first * second;
        else if (av[2][0] == '+')
            res = first + second;
        else if (av[2][0] == '-')
            res = first - second;
        else if (av[2][0] == '/')
            res = first / second;
        else if (av[2][0] == '%')
            res = first % second;
        printf("%i\n", res);            
    }
    else 
        write(1, "\n", 1);
    return (0);
}