/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ***** <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 11:35:16 by  *****          #+#    #+#             */
/*   Updated: 2026/07/26 11:29:08 by  *****         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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
		if ((base[i] == '+' || base[i] == '-')
			|| (base[i] >= 9 && base[i] <= 13) || (base[i] == ' '))
			return (0);
		i++;
	}
	return (1);
}

int	get_the_value(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	res;
	int	i;
	int	sign;
	int	len;

	res = 0;
	i = 0;
	sign = 1;
	len = ft_strlen(base);
	if (is_base_valid(base) == 0)
		return (0);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (get_the_value(str[i], base) != -1)
	{
		res = (res * len) + get_the_value(str[i], base);
		i++;
	}
	return (res * sign);
}

/*int	main(void)
{
	printf("%i\n", ft_atoi_base("2A", "0123456789ABCDEF"));
}*/
