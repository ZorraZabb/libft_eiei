/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleelata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 22:07:31 by sleelata          #+#    #+#             */
/*   Updated: 2022/04/15 23:27:20 by sleelata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*tmp;
	char	a;

	a = c;
	tmp = (char *) s;
	i = ft_strlen(s);
	while (i > 0)
	{
		if (*(tmp + i) == a)
			return (tmp + i);
		i--;
	}
	if (*tmp == a)
		return (tmp);
	return (NULL);
}
