/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleelata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 23:28:39 by sleelata          #+#    #+#             */
/*   Updated: 2022/04/03 23:28:20 by sleelata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>
// #include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	char	*a;

	a = (char *) b;
	while (len > 0)
	{
		*a = (char) c;
		len--;
		a++;
	}
	return (b);
}
/*
int main(void)
{
	char a[30] = "Hello World";
	printf("Before : %s\n", a);
	memset(a,'c',7);
	printf("After : %s\n", a);
	return (0);
}
*/
