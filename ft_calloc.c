/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleelata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 00:48:11 by sleelata          #+#    #+#             */
/*   Updated: 2022/04/25 23:17:29 by sleelata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void		*s;
	size_t		i;

	if (count >= SIZE_MAX || size >= SIZE_MAX)
		return (NULL);
	s = (void *)malloc(count * size);
	if (!s)
		return (NULL);
	i = 0;
	while (count * size > i)
	{
		((char *)s)[i] = 0;
		i++;
	}
	return (s);
}
