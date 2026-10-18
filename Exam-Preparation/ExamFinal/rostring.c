#include <unistd.h>
#include <stdlib.h>

int is_blink(char c)
{
    return(c == ' ' || c == '\t');
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int i = 0;
        int firstword = 0;
        while (av[1][i])
        {
            while(av[1][i] && is_blink(str[i]))
                i++;
            while(av[1][i])
            {
                if(av[1][i] && !is_blink(av[1][i++]))
                    firstword++;
            }
        }
        
    }
    
}