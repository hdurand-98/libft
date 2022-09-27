/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdurand <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 19:09:13 by hdurand           #+#    #+#             */
/*   Updated: 2019/11/12 18:24:44 by hdurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	const char		*str1;
	const char		*str2;
	int				c;

	i = 0;
	c = 0;
	str1 = s1;
	str2 = s2;
	if (n == 0)
		return (0);
	while ((unsigned char)str1[i] != 0 && (unsigned char)str2[i] != 0
	&& i < n - 1 && (unsigned char)str1[i] == (unsigned char)str2[i])
		i++;
	c = (unsigned char)str1[i] - (unsigned char)str2[i];
	return (c);
}
