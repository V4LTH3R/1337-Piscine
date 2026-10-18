/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ***** <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 15:46:36 by  *****          #+#    #+#             */
/*   Updated: 2026/07/15 10:05:03 by  *****         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char fdy)
{
	write(1, &fdy, 1);
}

void	print_comb2(int xx, int yy)
{
	ft_putchar((xx / 10) + '0');
	ft_putchar((xx % 10) + '0');
	ft_putchar(' ');
	ft_putchar((yy / 10) + '0');
	ft_putchar((yy % 10) + '0');
	if (xx != 98)
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			print_comb2(x, y);
			y++;
		}
		x++;
	}
}

/*int main(void)
{
	ft_print_comb2();
}*/
