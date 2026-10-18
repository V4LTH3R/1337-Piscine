/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ***** <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 15:51:16 by  *****          #+#    #+#             */
/*   Updated: 2026/07/23 16:03:27 by  *****         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printarr(int *arr, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		write(1, &arr[i], 1);
		i++;
	}
	if (arr[0] != (10 - n) + 48)
		write(1, ", ", 2);
}

void	arrmax(int *arr, int *max, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		arr[i] = i + 48;
		max[i] = ((10 - n) + i) + 48;
		i++;
	}
}

void	ft_print_combn(int n)
{
	int	arr[10];
	int	max[10];
	int	i;

	i = 0;
	if (n <= 0 || n >= 10)
		return ;
	arrmax(arr, max, n);
	while (1)
	{
		printarr(arr, n);
		i = n - 1;
		while (i >= 0 && arr[i] == max[i])
			i--;
		if (arr[0] == max[0])
			break ;
		arr[i]++;
		i++;
		while (i < n)
		{
			arr[i] = arr[i - 1] + 1;
			i++;
		}
	}
}
