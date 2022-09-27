/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdurand <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 19:44:45 by hdurand           #+#    #+#             */
/*   Updated: 2019/11/21 17:46:36 by hdurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_nbdiz(long nb)
{
	int diz;

	diz = 1;
	while (nb / 10 != 0)
	{
		nb = nb / 10;
		diz++;
	}
	return (diz);
}

int		ft_strlen4(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	char	temp;
	int		i;
	int		turn;

	temp = 0;
	i = ft_strlen4(str);
	turn = i / 2;
	while (turn > 0)
	{
		temp = str[turn - 1];
		str[turn - 1] = str[i - turn];
		str[i - turn] = temp;
		turn--;
	}
	return (str);
}

char	*ft_itoa(int nbr)
{
	long	nbr2;
	char	*str;
	int		i;
	int		space;

	nbr2 = nbr;
	i = 0;
	if (nbr < 0)
		nbr2 *= -1;
	space = ft_nbdiz(nbr2);
	if (!(str = malloc(sizeof(char) * space + 2)))
		return (NULL);
	while (i < space)
	{
		str[i] = nbr2 % 10 + 48;
		nbr2 /= 10;
		i++;
	}
	if (nbr < 0)
		str[i++] = '-';
	str[i] = 0;
	return (ft_strrev(str));
}
