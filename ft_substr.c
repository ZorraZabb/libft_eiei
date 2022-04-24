/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleelata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 18:17:07 by sleelata          #+#    #+#             */
/*   Updated: 2022/04/24 01:55:05 by sleelata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_string(char const *s, unsigned int start, size_t len)
{
	int	c;
	int	i;

	c = 0;
	i = 0;
	while (*(s + start + i) != '\0' && len > 0)
	{
		c++;
		i++;
		len--;
	}
	return (c);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	int		count;

	if (start > ft_strlen(s))
	{
		sub = (char *) malloc(1);
		*sub = '\0';
		return (sub);
	}
	sub = (char *) malloc(sizeof(char) * count_string(s, start, len) + 1);
	count = 0;
	while (len > 0 && *(s + start + count) != '\0')
	{
		*(sub + count) = *(s + start + count);
		count++;
		len--;
	}
	*(sub + count) = '\0';
	return (sub);
}
