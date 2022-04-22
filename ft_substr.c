/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleelata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 18:17:07 by sleelata          #+#    #+#             */
/*   Updated: 2022/04/22 10:00:58 by sleelata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	sub = (char *) malloc(sizeof(char) * (ft_strlen(s + start) + 1));
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
