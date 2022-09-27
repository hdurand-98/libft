/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdurand <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 12:49:09 by hdurand           #+#    #+#             */
/*   Updated: 2019/11/14 13:09:06 by hdurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	slen1;
	size_t	slen2;
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	j = 0;
	slen1 = ft_strlen(s1);
	slen2 = ft_strlen(s2);
	if (!(str = malloc(sizeof(char) * (slen1 + slen2) + 1)))
		return (0);
	while (j < slen1)
		str[i++] = s1[j++];
	j = 0;
	while (j < slen2)
		str[i++] = s2[j++];
	str[i] = 0;
	return (str);
}
