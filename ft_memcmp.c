/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdurand <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 20:48:06 by hdurand           #+#    #+#             */
/*   Updated: 2019/11/12 18:15:07 by hdurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *str1;
	const unsigned char *str2;
	unsigned int		i;
	int					c;

	i = 0;
	c = 0;
	str1 = s1;
	str2 = s2;
	while (i < n - 1 && str1[i] == str2[i])
		i++;
	if (n != 0)
		c = str1[i] - str2[i];
	return (c);
}
