#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    if (ac == 4)
    {
        int one = atoi(av[1]);
        int two = atoi(av[3]);
        if (av[2][0] == '+')
            printf("%i\n", one + two);
        // same thing with other operators
    }
    else
        write(1, "\n", 1);
}