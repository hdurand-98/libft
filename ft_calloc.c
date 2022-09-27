/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdurand <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 14:19:13 by hdurand           #+#    #+#             */
/*   Updated: 2019/11/21 17:33:12 by hdurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;
	size_t	i;

	i = 0;
	if (!(ptr = malloc(count * size)))
		return (0);
	else
	{
		while (i < (count * size))
		{
			ptr[i] = 0;
			i++;
		}
		return ((void *)ptr);
	}
}
