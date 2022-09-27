/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdurand <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 18:24:17 by hdurand           #+#    #+#             */
/*   Updated: 2019/11/07 19:10:14 by hdurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	c2;
	int		i;
	int		temp;

	i = 0;
	temp = -1;
	c2 = c;
	while (s[i] != 0)
	{
		if (s[i] == c2)
			temp = i;
		i++;
	}
	if (c2 == 0)
		temp = i;
	if (temp < 0)
		return (0);
	else
		return ((char *)&s[temp]);
}
