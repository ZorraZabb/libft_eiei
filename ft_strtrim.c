/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleelata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 13:56:24 by sleelata          #+#    #+#             */
/*   Updated: 2022/04/22 10:09:29 by sleelata         ###   ########.fr       */
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

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i_start;
	int	i_last;
	int	count;

	i_start = 0;
	count = 0;
	i_last = ft_strlen(s1);
	while (*(s1 + i_start) != '\0')
	{
		if (check_equal(*(s1 + i_start), set))
			i_start++;
		else
			break ;
	}
	while (i_last >= 0)
	{
		if (check_equal(*(s1 + (i_last - 1)), set))
		{
			count++;
			i_last--;
		}
		else
			break ;
	}
	return (ft_substr(s1, i_start, ft_strlen(s1 + i_start) - count));
}
