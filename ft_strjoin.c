/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleelata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 20:12:26 by sleelata          #+#    #+#             */
/*   Updated: 2022/04/26 10:56:00 by sleelata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tmp;
	int		index;
	int		index2;

	index = 0;
	index2 = 0;
	if (!s1 || !s2)
		return (NULL);
	tmp = (char *) malloc(sizeof(char) * ((ft_strlen(s1) + ft_strlen(s2)) + 1));
	if (!tmp)
		return (NULL);
	while (*(s1 + index) != '\0')
	{
		*(tmp + index) = *(s1 + index);
		index++;
	}
	while (*(s2 + index2) != '\0')
	{
		*(tmp + index) = *(s2 + index2);
		index2++;
		index++;
	}
	*(tmp + index) = '\0';
	return (tmp);
}
