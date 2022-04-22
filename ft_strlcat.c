/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleelata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 21:42:19 by sleelata          #+#    #+#             */
/*   Updated: 2022/04/17 01:17:23 by sleelata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t		i;
	size_t		j;

	i = 0;
	while (*(dst + i) != '\0')
		i++;
	j = 0;
	while (*(src + j) != '\0' && i + j + 1 < dstsize)
	{
		*(dst + j + i) = *(src + j);
		j++;
	}
	*(dst + j + i) = '\0';
	if (i > dstsize)
		return (dstsize + ft_strlen(src));
	return (i + ft_strlen(src));
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char src[40] = "Hello World";
	char dst[40] = "Google";
	size_t n = ft_strlen(dst);

	printf("len : %ld\n",ft_strlcat(dst, src, n));
}
*/
