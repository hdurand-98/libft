/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdurand <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 18:05:42 by hdurand           #+#    #+#             */
/*   Updated: 2019/11/21 17:43:39 by hdurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*strdest;
	unsigned char		temp[len];
	const unsigned char	*strsrc;
	size_t				i;

	i = 0;
	strdest = dst;
	strsrc = src;
	if (dst == NULL && src == NULL)
		return (0);
	while (i < len)
	{
		temp[i] = strsrc[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		strdest[i] = temp[i];
		i++;
	}
	return (strdest);
}
