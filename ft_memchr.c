/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdurand <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 18:34:09 by hdurand           #+#    #+#             */
/*   Updated: 2019/11/12 17:51:55 by hdurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char *str;
	unsigned char		c2;
	unsigned int		i;

	i = 0;
	c2 = c;
	str = s;
	while (str[i] != c2 && str[i] != 0 && i < n)
		i++;
	if (str[i] == c2 && i != n)
		return ((void*)&str[i]);
	else
		return (NULL);
}
