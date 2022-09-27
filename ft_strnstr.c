/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdurand <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 19:41:23 by hdurand           #+#    #+#             */
/*   Updated: 2019/11/19 16:02:50 by hdurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	incrementer(size_t *i, size_t *j)
{
	*i = *i + 1;
	*j = *j + 1;
}

char	*ft_strnstr(const char *str, const char *tf, size_t len)
{
	size_t i;
	size_t j;
	size_t k;

	i = 0;
	j = 0;
	k = 0;
	while (tf[j] != 0 && str[i] != 0 && i < len)
	{
		j = 0;
		if (str[i] == tf[j])
		{
			k = i;
			while (str[i] == tf[j] && (str[i] && tf[j]) && i < len)
				incrementer(&i, &j);
			if (tf[j] == 0)
				return ((char *)&str[k]);
			else
				i = k + 1;
		}
		else
			i++;
	}
	return (tf[0] == 0 ? (char *)str : 0);
}
