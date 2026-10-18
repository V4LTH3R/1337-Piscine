/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ***** <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 17:47:04 by  *****          #+#    #+#             */
/*   Updated: 2026/07/15 10:44:40 by  *****         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	printnb(int nb)
{
	char	arr[10];
	int		i;

	i = 0;
	while (nb != 0)
	{
		arr[i] = (nb % 10) + '0';
		nb /= 10;
		i++;
	}
	while (i--)
	{
		write(1, &arr[i], 1);
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb > 0)
		printnb(nb);
	else if (nb == 0)
		write(1, "0", 1);
}

/*int	main(void)
{
	ft_putnbr(42);
	write(1, "\n", 1);
	ft_putnbr(0);
	write(1, "\n", 1);
	ft_putnbr(-1337);
}*/
