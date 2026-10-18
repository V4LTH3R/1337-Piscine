#include <unistd.h>

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int i = 0;
        int count = 0;
        while (av[1][i])
        {
            while (av[1][i] == av[1][i+1] || (av[1][i] == (av[1][i+1] - 32)) || (av[1][i] == (av[1][i+1] + 32)))
            {
                count++;
                i++;
            }
            if(av[1][i] >= 'A' && av[1][i] <= 'Z')
            {
                char c = av[1][i] + 32;
                write(1, &c, 1);
            }
            else
                write(1, &av[1][i], 1);
            i++;
        }
        write(1, "\n", 1);
    }
    
}