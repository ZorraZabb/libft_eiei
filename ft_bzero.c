/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleelata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 15:25:11 by sleelata          #+#    #+#             */
/*   Updated: 2022/04/03 23:28:37 by sleelata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*tmp;

	tmp = (char *)s;
	while (n > 0)
	{
		tmp[n - 1] = 0;
		n--;
	}
}
/*
#include <stdio.h>

int main(void)
{
	char s[30] = "Hello World";
	printf("Before : [%s]\n",s);
	ft_bzero(s,5);
	printf("After : [%s]\n",&s[5]);
}
*/
