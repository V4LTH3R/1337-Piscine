#include <stdio.h> // Printf
#include <stdlib.h> // Malloc
#include <string.h> // Strcat

int ft_atoi(char *str, int *i)
{
	int	sign;
	int	number;

	sign = 0;
	number = 0;
	while ((str[*i] >= 9 && str[*i] <= 13) || str[*i] == 32)
		(*i)++;
	while (str[*i] == '-' || str[*i] == '+')
	{
		if (str[*i] == '-')
			sign++;
		(*i)++;
	}
	while (str[*i] >= 48 && str[*i] <= 57)
	{
		number *= 10;
		number += str[*i] - 48;
	(*i)++;
	}
	if (!(sign % 2))
		return (number);
	return (-number);
}

char	*putnbr(int nb)
{
	char *str = malloc((char)11);
	int i = 0;
	if (nb < 0)
	{
		str[i] = '-';
		i++;
		nb = -nb;
	}
	int start = i;
	while (nb > 0)
	{
		str[i++] = nb % 10 + '0';
		nb /= 10;
	}
	str[i] = '\0';
	int end = i - 1;
	while (start < end)
	{
		int temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}
	return str;
}

char	*HandL(char *str)
{
	int i = 0;
	int high = ft_atoi(str, &i);
	int low = high;
	while (str[i])
	{
		int temp = ft_atoi(str, &i);
		if (high <= temp)
			high = temp;
		if(low >= temp)
			low = temp;
	}
	char *big;
	char *small;
	big = putnbr(high);
	small = putnbr(low);
	strcat(big, " ");
	strcat(big, small);
	return big;
}

int main(void)
{
	printf("%s\n", HandL("1 9 -3 4 5 -6")); // "9 -6"
}