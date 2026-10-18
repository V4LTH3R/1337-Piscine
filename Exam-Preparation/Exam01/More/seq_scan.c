#include <unistd.h>

int ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return i;
}

int	ft_strupcase(char one, char sec)
{
    if (one == sec)
        return 1;
    else if (one + 32 == sec)
        return 1;
    else if (one - 32 == sec)
        return 1;
    else 
        return 0;
}

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		int len = ft_strlen(av[1]);
		int i = 0;
		int j = 0;
		while(av[2][i])
		{
			if(ft_strupcase(av[1][j], av[2][i]) == 1)
				j++;
			i++;
		}
		if(j == len)
			write(1, av[1], j);
		write(1, "\n", 1);
	}
	else
		write(1, "number of arguments\n", 20);
	return (0);
}
