/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleelata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 12:29:52 by sleelata          #+#    #+#             */
/*   Updated: 2022/04/25 12:36:36 by sleelata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*tmp_s1;
	unsigned char	*tmp_s2;
	unsigned int	i;

	tmp_s1 = (unsigned char *) s1;
	tmp_s2 = (unsigned char *) s2;
	i = 0;
	while (n > 0)
	{
		if (*(tmp_s1 + i) != *(tmp_s2 + i))
			return (*(tmp_s1 + i) - *(tmp_s2 + i));
		i++;
		n--;
	}
	return (0);
}
