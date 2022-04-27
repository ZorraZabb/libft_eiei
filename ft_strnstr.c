/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleelata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 13:32:51 by sleelata          #+#    #+#             */
/*   Updated: 2022/04/25 22:42:46 by sleelata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		j;

	i = 0;
	if (*(needle + i) == '\0')
		return ((char *)haystack);
	while (*(haystack + i) != '\0')
	{
		j = 0;
		if (*(needle + j) == *(haystack + i))
		{
			while (*(needle + j) == *(haystack + i + j) && i + j < len)
			{
				j++;
				if (*(needle + j) == '\0')
					return ((char *)haystack + i);
			}
		}
		i++;
	}
	return (NULL);
}
