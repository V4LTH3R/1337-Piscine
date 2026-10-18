/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ***** <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 11:59:58 by *****          #+#    #+#             */
/*   Updated: 2026/08/03 12:48:06 by *****         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	is_seq(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	count;
	int	in_word;

	i = 0;
	count = 0;
	in_word = 0;
	while (str[i])
	{
		if (!is_seq(str[i], charset) && in_word == 0)
		{
			count++;
			in_word = 1;
		}
		else if (is_seq(str[i], charset))
			in_word = 0;
		i++;
	}
	return (count);
}

int	word_len(char *str, char *charset, int start)
{
	int	i;

	i = start;
	while (str[i] && !is_seq(str[i], charset))
		i++;
	return (i - start);
}

void	twofive(char *str, char *charset, char **split)
{
	int	i;
	int	k;
	int	j;

	i = 0;
	k = 0;
	while (str[i])
	{
		j = 0;
		if (is_seq(str[i], charset))
			i++;
		else
		{
			split[k] = malloc((word_len(str, charset, i) + 1));
			if (!split[k])
				return ;
			while (str[i] && !is_seq(str[i], charset))
				split[k][j++] = str[i++];
			split[k][j] = 0;
			k++;
		}
	}
	split[k] = NULL;
}

char	**ft_split(char *str, char *charset)
{
	char	**split;
	int		words;

	words = count_words(str, charset);
	split = malloc(sizeof(char *) * (words + 1));
	if (!split)
		return (NULL);
	twofive(str, charset, split);
	return (split);
}
