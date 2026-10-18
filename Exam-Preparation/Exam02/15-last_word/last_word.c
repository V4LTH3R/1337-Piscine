#include <unistd.h>
int main(int ac, char **av)
{
	if (ac == 2)
	{
		int len = 0;
		int end = 0;
		while (av[1][len])
			len++;
		len--;
			while (av[1][len] == ' ' || av[1][len] == '\t')
				len--;
			end = len;
			while (av[1][len] != ' ' && av[1][len] != '\t')
				len--;
			len++;
			while (len <= end)
			{
				write(1, &av[1][len], 1);
				len++;
			}
	}
	write(1, "\n", 1);
}