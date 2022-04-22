/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleelata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 15:17:24 by sleelata          #+#    #+#             */
/*   Updated: 2022/04/22 11:41:03 by sleelata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_num(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		count = 1;
	while (n)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_make_arr(int n, int i, int j, char *arr)
{
	if (n == -2147483648)
	{
		ft_strlcpy(arr, "-2147483648", (sizeof (char) * count_num(n) + 2));
		return (arr);
	}
	if (n < 0)
	{
		*arr = '-';
		n = n * -1;
		i++;
		j++;
	}
	while (n != 0)
	{
		*(arr + i) = (n % 10) + '0';
		n = n / 10;
		i--;
	}
	return (arr);
}

char	*ft_itoa(int n)
{
	char	*arr;
	int		i;
	int		j;

	i = count_num(n) - 1;
	j = count_num(n);
	arr = (char *) malloc(sizeof(char) * count_num(n) + 2);
	if (n == 0)
		*arr = '0';
	ft_make_arr(n, i, j, arr);
	if (n < 0)
		*(arr + j + 1) = '\0';
	else
		*(arr + j) = '\0';
	return (arr);
}
