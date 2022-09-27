/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdurand <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 18:36:41 by hdurand           #+#    #+#             */
/*   Updated: 2019/11/13 18:04:41 by hdurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char			*strdest;
	const char		*strsrc;
	unsigned int	i;

	strdest = dst;
	strsrc = src;
	i = 0;
	if (dst == NULL && src == NULL)
		return (0);
	while (i < n)
	{
		strdest[i] = strsrc[i];
		i++;
	}
	return (strdest);
}
