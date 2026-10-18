/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ***** <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 10:30:53 by  *****          #+#    #+#             */
/*   Updated: 2026/07/26 11:41:23 by  *****         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *ether)
{
	int	fdy;

	fdy = 0;
	while (ether[fdy])
		fdy++;
	return (fdy);
}

int	is_char_duplicate(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	is_base_valid(char *base)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(base);
	if (len < 2 || (is_char_duplicate(base) == 0))
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	char		arr[33];
	int			i;
	int long	nb;

	if (!is_base_valid(base))
		return ;
	i = 0;
	nb = nbr;
	if (nb < 0 && write(1, "-", 1))
		nb = nb * (-1);
	if (nb == 0)
	{
		write(1, &base[0], 1);
		return ;
	}
	while (nb)
	{
		arr[i++] = base[nb % ft_strlen(base)];
		nb /= ft_strlen(base);
	}
	arr[i] = 0;
	while (i--)
		write(1, &arr[i], 1);
}

/*int	main(void)
{
	ft_putnbr_base(-2147483648, "01");
}*/
