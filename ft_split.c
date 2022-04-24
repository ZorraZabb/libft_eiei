/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleelata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 22:12:34 by sleelata          #+#    #+#             */
/*   Updated: 2022/04/24 11:00:39 by sleelata         ###   ########.fr       */
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

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	arr = (char **) malloc(count_word(s, c) * sizeof(char *) + 1);
	if (!arr)
		return (NULL);
	while (*(s + i) && k < count_word(s, c))
	{
		while (*(s + i) == c && *(s + i) != '\0')
			i++;
		while (*(s + i) != c && *(s + i) != '\0')
		{
			j++;
			i++;
		}
		arr[k++] = ft_substr(s, i - j, j);
		j = 0;
	}
	arr[k] = NULL;
	return (arr);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char *splitme = strdup("Tripoulle ");
	char **tab = ft_split(splitme, ' ');

	printf("[%d][%s]\n",0,tab[0]);
	printf("[%d][%s]\n",1,tab[1]);
	printf("[%d][%s]\n",2,tab[2]);
	printf("[%d][%s]\n",3,tab[3]);
	printf("[%d][%s]\n",4,tab[4]);
}*/
