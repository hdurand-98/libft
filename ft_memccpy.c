/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdurand <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 16:16:05 by hdurand           #+#    #+#             */
/*   Updated: 2019/11/26 17:34:11 by hdurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char			*strdest;
	const unsigned char		*strsrc;
	unsigned int			i;

	strdest = dst;
	strsrc = src;
	i = 0;
	if (!src)
		return (0);
	while (strsrc[i] != 0 && i < n && strsrc[i] != (unsigned char)c)
	{
		strdest[i] = strsrc[i];
		i++;
	}
	if (strsrc[i] == (unsigned char)c)
	{
		strdest[i] = strsrc[i];
		return (&strdest[++i]);
	}
	else
		return (0);
}
