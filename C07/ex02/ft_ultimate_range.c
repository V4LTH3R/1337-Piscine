/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ***** <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 14:40:42 by *****          #+#    #+#             */
/*   Updated: 2026/08/01 17:59:22 by *****         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*arr;
	int	i;
	int	deff;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	deff = max - min;
	arr = malloc(sizeof(int) * deff);
	if (!arr)
	{
		*range = NULL;
		return (-1);
	}
	i = 0;
	while (min + i < max)
	{
		arr[i] = min + i;
		i++;
	}
	*range = arr;
	return (deff);
}
