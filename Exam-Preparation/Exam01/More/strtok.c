#include <unistd.h>

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int i = 0;
        int start;
        int pos = 1;

        while (av[1][i])
        {
            // skip spaces
            while (av[1][i] == ' ')
                i++;
            if (!av[1][i])
                break;
            start = i;
            while (av[1][i] && av[1][i] != ' ')
                i++;
            if (pos % 2 == 0)
            {
                int j = start;
                while (j < i)
                {
                    write(1, &av[1][j], 1);
                    j++;
                }
            }
            else
            {
                int j = i - 1;
                while (j >= start)
                {
                    write(1, &av[1][j], 1);
                    j--;
                }
            }
            while (av[1][i] == ' ')
                i++;
            if (av[1][i])
                write(1, " ", 1);
            pos++;
        }
    }
    write(1, "\n", 1);
    return (0);
}