/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleelata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 22:05:34 by sleelata          #+#    #+#             */
/*   Updated: 2022/04/15 23:08:55 by sleelata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*tmp;
	char	a;

	a = c;
	tmp = (char *) s;
	i = 0;
	if (!s)
		return (NULL);
	while (*(tmp + i) != '\0')
	{
		if (*(tmp + i) == a)
			return (tmp + i);
		i++;
	}
	if (a == '\0')
		return (tmp + i);
	return (NULL);
}
