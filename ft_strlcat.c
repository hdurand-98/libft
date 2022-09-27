/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdurand <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 18:29:48 by hdurand           #+#    #+#             */
/*   Updated: 2019/11/20 17:55:26 by hdurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen2(char *str)
{
	size_t i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t dstlen;
	size_t endofdst;

	endofdst = ft_strlen2(dst);
	dstlen = endofdst;
	i = 0;
	if (dstsize != 0)
	{
		while (dstlen < dstsize - 1 && src[i] != 0)
		{
			dst[dstlen] = src[i];
			i++;
			dstlen++;
		}
		dst[dstlen] = 0;
	}
	if (dstsize <= endofdst)
		return (dstsize + ft_strlen2((char *)src));
	else
		return (endofdst + ft_strlen2((char *)src));
}
