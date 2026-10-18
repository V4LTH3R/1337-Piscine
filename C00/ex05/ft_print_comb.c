/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ***** <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 15:11:38 by  *****          #+#    #+#             */
/*   Updated: 2026/07/15 09:59:35 by  *****         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_comb(char uno, char dos, char tres)
{
	write(1, &uno, 1);
	write(1, &dos, 1);
	write(1, &tres, 1);
	if (uno != '7')
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	char	uno;
	char	dos;
	char	tres;

	uno = '0';
	while (uno <= '7')
	{
		dos = uno + 1;
		while (dos <= '8')
		{
			tres = dos + 1;
			while (tres <= '9')
			{
				print_comb(uno, dos, tres);
				tres++;
			}
			dos++;
		}
		uno++;
	}
}

/*int	main(void)
{
	ft_print_comb();
}*/
