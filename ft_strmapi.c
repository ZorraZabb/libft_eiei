/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleelata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 11:14:38 by sleelata          #+#    #+#             */
/*   Updated: 2022/04/25 22:25:41 by sleelata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*tmp;

	if (!s || !f)
		return (NULL);
	i = 0;
	tmp = (char *) malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!tmp)
		return (NULL);
	while (*(s + i) != '\0')
	{
		*(tmp + i) = *(s + i);
		*(tmp + i) = f(i,*(tmp + i));
		i++;
	}
	*(tmp + i) = '\0';
	return (tmp);
}
