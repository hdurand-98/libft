/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdurand <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 15:59:51 by hdurand           #+#    #+#             */
/*   Updated: 2019/11/07 18:28:40 by hdurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void *b, int c, size_t len)
{
	char			*str;
	unsigned char	c2;
	unsigned int	i;

	str = b;
	i = 0;
	c2 = c;
	while (i < len)
	{
		str[i] = c2;
		i++;
	}
	return (str);
}
