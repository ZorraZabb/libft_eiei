/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleelata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 13:32:51 by sleelata          #+#    #+#             */
/*   Updated: 2022/04/23 22:36:45 by sleelata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

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
/*
#include <string.h>

int main(void)
{
	char h[30] = "aaabcabc";
	char n[10] = "aabc";
	printf("[%s]\n",ft_strnstr(h, n, -1));
	printf("[%s]\n",strnstr(h, n, -1));
	return (0);
}*/
