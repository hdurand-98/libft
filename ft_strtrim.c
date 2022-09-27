/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdurand <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 16:08:59 by hdurand           #+#    #+#             */
/*   Updated: 2019/11/15 20:25:55 by hdurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int		is_c(const char c, const char *set)
{
	size_t i;

	i = 0;
	while (set[i] != 0)
	{
		if (c == set[i])
			return (1);
		else
			i++;
	}
	return (0);
}

char	*ft_stradup(const char *src, size_t min, size_t max)
{
	char*dest;
	int i;

	i = 0;
	if (!(dest = malloc(sizeof(char) * (max - min) + 2)))
		return (0);
	while (min <= max)
	{
		dest[i] = src[min];
		i++;
		min++;
	}
	dest[i] = 0;
	return (dest);
}

char	*ft_strtrim(const char *str, const char *set)
{
	char	*dest;
	size_t	i;
	size_t	j;

	i = 0;
	while (is_c(str[i], set) == 1 && str[i] != 0)
		i++;
	if (str[i] == 0)
		return (dest = malloc(0));
	j = i;
	while (str[j] != 0)
		j++;
	j--;
	while (is_c(str[j], set) == 1 && j != 0)
		j--;
	if (!(dest = ft_stradup(str, i, j)))
		return (0);
	return (dest);
}
