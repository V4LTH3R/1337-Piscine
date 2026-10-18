#include <unistd.h>
#include <stdlib.h> // atoi()
int main(int ac, char **av)
{
    if (ac == 3)
    {
        int i = 0;
        int nb = atoi(av[2]);
        while (nb > 26)
            nb -= 26;
        while (av[1][i])
        {
            if (av[1][i] >= 'a' && av[1][i] <= (122-nb) 
            || (av[1][i] >= 'A' && av[1][i] <= (90-nb)))
                av[1][i] = (av[1][i] + nb); 

            else if ((av[1][i] >= (122-nb) && av[1][i] <= 'z')
                 || (av[1][i] >= (90-nb) && av[1][i] <= 'Z'))
                av[1][i] = (av[1][i] + nb) - 26;

            write(1, &av[1][i] , 1);
            i++;
        }
        return 0;
    }
    else
    {
        write(1, "FALSE\n", 6);
        return 0;
    }
}