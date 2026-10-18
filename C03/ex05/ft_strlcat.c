/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ***** <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 10:57:21 by  *****          #+#    #+#             */
/*   Updated: 2026/07/23 16:08:41 by  *****         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dl;
	unsigned int	sl;
	unsigned int	i;

	dl = ft_strlen(dest);
	sl = ft_strlen(src);
	i = 0;
	if (size <= dl)
		return (size + sl);
	while (src[i] && dl + i < size - 1)
	{
		dest[dl + i] = src[i];
		i++;
	}
	dest[dl + i] = 0;
	return (dl + sl);
}
