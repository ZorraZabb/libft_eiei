/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleelata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 22:12:34 by sleelata          #+#    #+#             */
/*   Updated: 2022/04/22 00:32:00 by sleelata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_word(char const *s, char c)
{
	size_t	i;
	int		count;

	i = 0;
	count = 0;
	while (*(s + i) != '\0')
	{
		if ((*(s + i) != c && *(s + i + 1) == c) || *(s + i + 1) == '\0')
			count++;
		i++;
	}
	return (count);
}

int	find_max(char const *s, char c)
{
	int		max;
	int		count;
	int		i;

	max = 0;
	i = 0;
	count = 0;
	while (*(s + i))
	{
		if (*(s + i) == c || *(s + i + 1) == '\0')
		{
			if (count > max)
				max = count;
			count = 0;
		}
		else
			count++;
		i++;
	}
	return (max);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	arr = (char **) malloc(count_word(s, c) * find_max(s, c) + 1);
	while (*(s + i))
	{
		while (*(s + i) == c)
			i++;
		while (*(s + i) != c && *(s + i) != '\0')
		{
			j++;
			i++;
		}
		if (ft_substr(s, i - j, j))
			k++;
		arr[k] = ft_substr(s, i - j, j);
		j = 0;
	}
	return (arr);
}
