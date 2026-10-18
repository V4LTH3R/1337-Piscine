/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ***** <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 14:56:02 by *****          #+#    #+#             */
/*   Updated: 2026/08/01 17:57:46 by *****         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_strcat(char *dest, char *src, int *x)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[(*x)++] = src[i];
		i++;
	}
}

int	ft_strslen(char **strs, int size)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			len++;
			j++;
		}
		i++;
	}
	return (len);
}

void	mergethings(int size, char **strs, char *sep, char *fullstr)
{
	int	x;
	int	i;
	int	j;

	i = 0;
	x = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			fullstr[x++] = strs[i][j++];
		if (i != size - 1)
			ft_strcat(fullstr, sep, &x);
		i++;
	}
	fullstr[x] = 0;
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len;
	char	*fullstr;

	if (size == 0)
	{
		fullstr = malloc(sizeof(char));
		if (!fullstr)
			return (NULL);
		fullstr[0] = '\0';
		return (fullstr);
	}
	len = ft_strslen(strs, size) + (ft_strlen(sep) * (size - 1)) + 1;
	fullstr = malloc(sizeof(char) * len);
	if (!fullstr)
		return (NULL);
	mergethings(size, strs, sep, fullstr);
	return (fullstr);
}

/*int	main(void)
{
    char *strs[] = {""};
    char *sep = "";
    int size = 1;
    char *res = ft_strjoin(size, strs, sep);
    printf("%s\n", res);
}*/
