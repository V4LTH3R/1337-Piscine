/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ***** <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 14:30:31 by  *****          #+#    #+#             */
/*   Updated: 2026/07/19 11:30:21 by  *****         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

int	is_alpha_num(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	check;

	ft_strlowcase(str);
	i = 0;
	check = 1;
	while (str[i])
	{
		if (!is_alpha_num(str[i]))
			check = 1;
		else if (check)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
			check = 0;
		}
		i++;
	}
	return (str);
}
/*int    main(void)
{
    char    str[] = "4hi, how are you? 42words forty-two; fifty+and+one";
    ft_strcapitalize(str);
    printf("%s\n", str);
}*/
