/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleelata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 23:22:38 by sleelata          #+#    #+#             */
/*   Updated: 2022/04/26 10:51:59 by sleelata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_size;
	size_t	i;

	i = 0;
	src_size = ft_strlen(src);
	if (dstsize < 0)
		return (src_size);
	while (dstsize > 1 + i && *(src + i) != '\0')
	{
		*(dst + i) = *(src + i);
		i++;
	}
	if (dstsize > 0)
		*(dst + i) = '\0';
	return (src_size);
}
