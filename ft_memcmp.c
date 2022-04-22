/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleelata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 12:29:52 by sleelata          #+#    #+#             */
/*   Updated: 2022/04/08 12:34:07 by sleelata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*tmp_s1;
	unsigned char	*tmp_s2;

	tmp_s1 = (unsigned char *) s1;
	tmp_s2 = (unsigned char *) s2;
	if (n == 0)
		return (0);
	while (n > 0)
	{
		if (*(tmp_s1 + (n - 1)) != *(tmp_s2 + (n - 1)))
			return (*(tmp_s1 + (n - 1)) - *(tmp_s2 + (n - 1)));
		n--;
	}
	return (0);
}
