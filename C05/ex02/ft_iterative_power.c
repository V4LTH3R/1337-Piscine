/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ***** <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 16:05:15 by  *****          #+#    #+#             */
/*   Updated: 2026/07/26 16:15:08 by  *****         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	res;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (nb == 0)
		return (0);
	i = 1;
	res = nb;
	while (i < power)
	{
		res *= nb;
		i++;
	}
	return (res);
}

/*int	main(void)
{
	printf("%i\n", ft_iterative_power(0, 0));
}*/
