/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleelata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 10:02:08 by sleelata          #+#    #+#             */
/*   Updated: 2022/04/25 22:41:34 by sleelata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*tmp_dst;
	char	*tmp_src;
	size_t	i;

	tmp_dst = (char *) dst;
	tmp_src = (char *) src;
	i = -1;
	if (dst == src)
		return (dst);
	if (dst < src)
	{
		while (len > ++i)
			tmp_dst[i] = tmp_src[i];
	}
	if (dst > src)
	{
		while (len > 0)
		{
			tmp_dst[len - 1] = tmp_src[len - 1];
			len--;
		}
	}
	return (tmp_dst);
}
