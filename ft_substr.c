/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdurand <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 15:59:26 by hdurand           #+#    #+#             */
/*   Updated: 2019/11/26 14:25:54 by hdurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	if (start >= ft_strlen((char*)s))
		return (str = ft_calloc(1, 1));
	if (!(str = malloc(sizeof(char) * len + 1)))
		return (0);
	else
	{
		while (i < len)
		{
			str[i] = s[start];
			i++;
			start++;
		}
		str[i] = 0;
		return (str);
	}
}
