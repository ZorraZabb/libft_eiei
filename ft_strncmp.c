/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleelata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 23:09:08 by sleelata          #+#    #+#             */
/*   Updated: 2022/04/15 23:52:49 by sleelata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (n > 0)
	{
		if (*(s1 + i) == '\0' && *(s2 + i) != '\0')
			return (-1);
		if (*(s2 + i) == '\0' && *(s1 + i) != '\0')
			return (1);
		if (*(s1 + i) != *(s2 + i))
			return ((char)*(s1 + i) - (char)*(s2 + i));
		i++;
		n--;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char	str1[40] = "abcdef";
	char	str2[40] = "ABCDEF";
	size_t	n = 4;

	printf("NUM  : %d\n",'d'-'D');
	printf("TEST : %d\n",ft_strncmp(str1, str2, n));
}
*/
