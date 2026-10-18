/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ***** <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 20:01:56 by  *****          #+#    #+#             */
/*   Updated: 2026/07/20 19:05:56 by  *****         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_hex(unsigned char c)
{
	char	*hex_digits;

	hex_digits = "0123456789abcdef";
	write(1, "\\", 1);
	write(1, &hex_digits[c / 16], 1);
	write(1, &hex_digits[c % 16], 1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= ' ' && str[i] <= '~'))
			print_hex(str[i]);
		else
			ft_putchar(str[i]);
		i++;
	}
}

/*int	main(void)
{
	char	*text = "Hello\nHow are you?";
	ft_putstr_non_printable(text);
	return (0);
}*/
