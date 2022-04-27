/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleelata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 22:12:34 by sleelata          #+#    #+#             */
/*   Updated: 2022/04/27 00:51:22 by sleelata         ###   ########.fr       */
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
		if (*(s + i) != c && (*(s + i + 1) == c || *(s + i + 1) == '\0'))
			count++;
		i++;
	}
	return (count);
}

void	ft_free(char **arr, int k)
{
	int	i;

	i = 0;
	while (i < k)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return ;
}

char	**ft_make_split(int i, int j, char const *s, char c)
{
	int		k;
	char	**arr;
	int		count;

	k = 0;
	count = count_word(s, c);
	arr = malloc((count + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	while (*(s + i) && k < count)
	{
		while (*(s + i) == c && *(s + i) != '\0')
			i++;
		while (*(s + i) != c && *(s + i) != '\0')
		{
			i++;
			j++;
		}
		arr[k++] = ft_substr(s, i - j, j);
		j = 0;
	}
	arr[k] = NULL;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	arr = ft_make_split(i, j, s, c);
	return (arr);
}
