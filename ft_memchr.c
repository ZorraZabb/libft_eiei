/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleelata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 23:33:34 by sleelata          #+#    #+#             */
/*   Updated: 2022/04/21 00:22:02 by sleelata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*tmp;
	int		i;

	tmp = (char *) s;
	i = 0;
	if (n == 0)
		return (NULL);
	while (n > 0)
	{
		if (tmp[i] == (char) c)
			return ((void *)&tmp[i]);
		i++;
		n--;
	}
	return (NULL);
}
