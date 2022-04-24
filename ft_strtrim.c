/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleelata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 13:56:24 by sleelata          #+#    #+#             */
/*   Updated: 2022/04/23 21:43:09 by sleelata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_equal(char c, char const *set)
{
	int	i;

	i = 0;
	while (*(set + i) != '\0')
	{
		if (*(set + i) == c)
			return (1);
		else
			i++;
	}
	return (0);
}

char	*ft_make_arr(int i, int j, char const *s1, char const *set)
{
	char	*arr;
	int		c_j;

	c_j = 0;
	while (*(s1 + i) != '\0' && check_equal(*(s1 + i), set))
		i++;
	while (j >= 0 && check_equal(*(s1 + j - 1), set))
	{
		c_j++;
		j--;
	}
	arr = ft_substr(s1 + i, 0, ft_strlen(s1 + i) - c_j);
	return (arr);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i_start;
	int		i_last;
	char	*arr;

	if (!s1 || !set)
		return (NULL);
	i_start = 0;
	i_last = ft_strlen(s1);
	arr = ft_make_arr(i_start, i_last, s1, set);
	return (arr);
}
