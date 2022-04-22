/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleelata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 00:48:11 by sleelata          #+#    #+#             */
/*   Updated: 2022/04/20 22:20:24 by sleelata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	int		*s;
	int		i;

	if (count == SIZE_MAX || size == SIZE_MAX)
		return (NULL);
	s = (int *)malloc(count * size);
	i = 0;
	while (count > 0)
	{
		s[i] = 0;
		i++;
		count--;
	}
	s[i + 1] = '\0';
	return (s);
}
