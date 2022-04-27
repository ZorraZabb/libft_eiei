/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleelata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 21:34:42 by sleelata          #+#    #+#             */
/*   Updated: 2022/04/26 10:53:03 by sleelata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*tmp_src;
	char	*tmp_dst;

	tmp_src = (char *) src;
	tmp_dst = (char *) dst;
	if (dst == src)
		return (dst);
	while (n > 0)
	{
		tmp_dst[n - 1] = tmp_src[n - 1];
		n--;
	}
	return (dst);
}
