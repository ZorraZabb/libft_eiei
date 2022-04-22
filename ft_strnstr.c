/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleelata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 13:32:51 by sleelata          #+#    #+#             */
/*   Updated: 2022/04/22 11:06:49 by sleelata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	if (len < 0)
		len = len * -1;
	if (*(needle + i) == '\0')
		return ((char *)haystack);
	while (*(needle + j) != '\0')
	{
		while (*(haystack + i) != '\0' && i < len)
		{
			if (*(needle + j) == *(haystack + i))
			{
				if (*(needle + ++j) == '\0')
					return ((char *)haystack + (i - j + 1));
			}
			else
				j = 0;
			i++;
		}
		return (NULL);
	}
	return (NULL);
}
