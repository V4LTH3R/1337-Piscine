/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ***** <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 15:50:59 by  *****          #+#    #+#             */
/*   Updated: 2026/07/26 15:58:56 by  *****         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	sum;

	i = 1;
	sum = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		sum *= i;
		i++;
	}
	return (sum);
}

/*int	main(void)
{
	printf("%i\n",ft_iterative_factorial(0));
}*/
