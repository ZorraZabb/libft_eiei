/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleelata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 10:02:08 by sleelata          #+#    #+#             */
/*   Updated: 2022/04/17 02:18:30 by sleelata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdlib.h>

/*
size_t ft_strlen(const char *s)
{
	int i = 0;
	while(*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
*/
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*tmp_dst;
	char	*tmp_src;
	size_t	i;

	tmp_dst = (char *) dst;
	tmp_src = (char *) src;
	i = -1;
	if (dst == src)
		return (dst);
	if (dst < src)
	{
		while (len > ++i)
			tmp_dst[i] = tmp_src[i];
	}
	if (dst > src)
	{
		while (len > 0)
		{
			tmp_dst[len - 1] = tmp_src[len - 1];
			len--;
		}
	}
	return (tmp_dst);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char dst[30] = "";
	char src[30] = "lorem ipsum dolor sit amet";
	char check_dst[30] = "";
	char check_src[30] = "lorem ipsum dolar sit amet";
	int n = 5;

	printf("Before dst        = [%s]\n",dst);
	printf("Before check_dst  = [%s]\n",check_dst);

	ft_memmove(dst, src, n);
	memmove(check_dst, check_src, n);

	printf("After dst       = [%s]\n",dst);
	printf("After check_dst = [%s]\n",check_dst);
}
*/
