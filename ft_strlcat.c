/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleelata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 21:42:19 by sleelata          #+#    #+#             */
/*   Updated: 2022/04/27 07:00:17 by sleelata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		i;
	size_t		j;

	i = ft_strlen(dst);
	if (i >= dstsize)
		return (dstsize + ft_strlen(src));
	j = 0;
	while (*(src + j) != '\0' && i + j < dstsize - 1)
	{
		*(dst + j + i) = *(src + j);
		j++;
	}
	*(dst + j + i) = '\0';
	return (i + ft_strlen(src));
}
