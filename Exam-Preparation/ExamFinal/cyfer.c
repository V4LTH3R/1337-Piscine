#include <unistd.h>

int main(int ac, char **av)
{
    if(ac == 3)
    {
        int i = 0;
        int j = 0;
        while (av[1][i])
        {
            char c = av[1][i];
            if (av[2][j])
            {
                int shift = 0;
                if(av[2][j] >= 'a' && av[2][j] <= 'z')
                    shift = av[2][j] - 'a';
                else if((av[2][j] >= 'A' && av[2][j] <= 'Z'))
                    shift = av[2][j] - 'A';

                if(c >= 'a' && c <= 'z')
                    c = ((av[1][i] - 'a' + shift) % 26) + 'a';
                else if ((c >= 'A' && c <= 'Z'))
                    c = ((av[1][i] - 'A' + shift) % 26) + 'A';[]
                j++;
                if(av[2][j] == 0)
                    j = 0;
            }
            write(1, &c, 1);
            i++;
        }
    }
    write(1, "\n", 1);
}